vpath %.c src/push_swap
vpath %.c src/push_swap/operations
vpath %.c src/push_swap/utils
vpath %.c src/push_swap/sort

vpath %.c src/checker

NAME := push_swap
NAME_BONUS := checker

CFLAGS := -Wextra -Wall -Werror
CFLAGS += -O3 -g3

LIBTF := ./lib/libft
LIBS := -L$(LIBTF) -lft

OBJ_DIR := build

INCLUDE_DIR := include
INCLUDES := -I$(INCLUDE_DIR) -I$(LIBTF)

SRCS := push_swap.c erros.c parse_args.c init.c sa.c sb.c ss.c pa.c pb.c ra.c rb.c rr.c rra.c rrb.c rrr.c
SRCS += sort_three.c check_sorted.c max.c min.c
OBJS := $(addprefix $(OBJ_DIR)/, $(SRCS:.c=.o))

SRCS_BONUS := checker.c
OBJS_BONUS := $(addprefix $(OBJ_DIR)/, $(SRCS_BONUS:.c=.o))

all: libft $(NAME)

bonus: libft $(NAME_BONUS)

libft: update_submodules
	@$(MAKE) -C $(LIBTF)

update_submodules:
	git submodule foreach git pull origin master --rebase

$(NAME): $(OBJS)
	@$(CC) $(OBJS) $(LIBS) $(INCLUDES) $(CFLAGS) -o $(NAME)

$(NAME_BONUS): $(OBJS_BONUS)
	@$(CC) $(OBJS_BONUS) $(LIBS) $(INCLUDES) $(CFLAGS) -o $(NAME_BONUS)

$(OBJ_DIR)/%.o: %.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

clean: 
	@$(MAKE) -C $(LIBTF) clean
	@rm -rf $(OBJS) $(OBJS_BONUS)

fclean: clean
	@$(MAKE) -C $(LIBTF) fclean
	@rm -rf $(NAME)

re: fclean all

rebonus: fclean bonus

.PHONY: all, re, clean, fclean, bonus, rebonus, libft, update_submodules
