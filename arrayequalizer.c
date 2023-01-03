int main()
{
    int n, i, j, c1 = 1, c2 = 1, a[100];
    scanf(" %d ", &n);
    for(i = 0; i < n; i++)
    {
        scanf(" %d ", &a[i]);
    }
    for(i = 0; i < n; i++)
        {
         c1 = 1;
        for(j = i + 1; j < n; j++)
          {
            if(a[i] == a[j])
                c1++;

          }
        if(c1 > c2)
            c2 = c1;
        }
    printf(" %d ", n - c2);
    return 0;
}
