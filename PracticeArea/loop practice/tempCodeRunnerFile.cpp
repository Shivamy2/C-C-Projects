    }
}

void loop_pattern3(int n) {
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - (i - 1); j++)
        {
            cout<< " ";
        }
        cout<<endl;
        
    }
    
}

void loop_pattern4(int n) {
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j<= n-i)
            {
                cout<<" ";
            }
            else
            {
                cout<<"*";
            }
        }
        cout<<endl;
        
    }
}
void loop_pattern5(int n) {
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
void loop_pattern6(int n) {
    int k = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<k<<" ";
            k++;
        }
        cout<<endl;
    }
}
void loop_pattern7(int n) {
    for (int i = 1; i <= 2*n; i++)
    {
        for (int j = 1; j <= 2*n; j++)
        {
            if (j <= i || j >= 2*n- i)
            {
                cout<< "* ";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;