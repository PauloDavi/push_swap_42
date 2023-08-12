vpath %.c src/push_swap
vpath %.c src/push_swap/operations
vpath %.c src/push_swap/utils
vpath %.c src/push_swap/sort

vpath %.c src/checker

NAME := push_swap
NAME_BONUS := checker

CFLAGS := -Wextra -Wall -Werror -Wno-error=unused-result
CFLAGS += -O3 -g3

LIBTF := ./lib/libft
LIBS := -L$(LIBTF) -lft

OBJ_DIR := build

INCLUDE_DIR := include
INCLUDES := -I$(INCLUDE_DIR) -I$(LIBTF)

SRCS := push_swap.c erros.c parse_args.c init.c
SRCS += sa.c sb.c ss.c pa.c pb.c ra.c rb.c rr.c rra.c rrb.c rrr.c
SRCS += sort_three.c sort_two.c sort.c check_sorted.c
SRCS += max.c min.c
OBJS := $(addprefix $(OBJ_DIR)/, $(SRCS:.c=.o))

SRCS_BONUS := checker.c
OBJS_BONUS := $(addprefix $(OBJ_DIR)/, $(SRCS_BONUS:.c=.o))

all: libft $(NAME)

bonus: libft $(NAME_BONUS)

libft:
	@$(MAKE) -C $(LIBTF)

init_submodules:
	git submodule update --init

update_submodules: init_submodules
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

.PHONY: all, re, clean, fclean, bonus, rebonus, libft, init_submodules, update_submodules
