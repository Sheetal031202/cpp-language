 while (num != 0)
    {
        rem = num % 10;
        sum = sum + rem;
        num = num / 10;
    }

    while (sum >= 10)
    {
        int sum2 = 0;
        while (sum != 0)
        {
            rem = sum % 10;
            sum2 =sum2+ rem;
            sum = sum / 10;
        }
        sum = sum2;
    }
