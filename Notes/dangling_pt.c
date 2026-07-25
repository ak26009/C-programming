int *get_value(void)
{
    int x = 10;
    return &x;
}

int main(void)
{
    int *ptr = get_value();

    printf("%d", *ptr);

    return 0;
}


ptr is calling the fuction but when the function returns the address of the variable x and it is stored locally then the scope of the variable is over and the ponter getts nothing and it is having an
behaviour and it is called as a dangling pointer.
