int *ptr=&arr[0];

    cout<<ptr<<" "<<*ptr<<endl;
    cout<<ptr+1<<" "<<*(ptr+1)<<endl;

    *ptr++;
    cout<<*ptr<<endl;

    cout<<(*ptr++)<<endl;