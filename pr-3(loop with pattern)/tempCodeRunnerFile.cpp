for (int i = 5; i >= 1; i--)
    {
        for (int s = 1; s < i; s++)
        {
            cout << " ";
        }
        for (int j = i; j <= 5; j++)
        {
           cout<<"*";
        }
         for (int j = 4; j >= i; j--)
        {
           cout<<"*";
        }
        cout << endl;
    }