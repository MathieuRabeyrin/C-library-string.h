char *chr(const char *s, int c)
{
    for (; *s != '\0'; *s++)
        if (*s == c)
            return (char *)s;
    return (NULL);
}
