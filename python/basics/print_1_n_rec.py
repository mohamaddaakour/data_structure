def print_1_n_rec(num: int) -> None:
    # base case (where the program stop)
    if num < 1:
        return
    
    print_1_n_rec(num - 1)

    # this line will be saved in a stack in each recursive call
    # and be executed when we achieve the base case
    print(num)

print_1_n_rec(5)