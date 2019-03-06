
1.  ios_base::sync_with_stdio(false);
/*
    This disables the synchronization between the C and C++ standard streams.
    By default, all standard streams are synchronized, which in practice allows you to mix C and C++ style I/O
    and get sensible and expected results.
    If you disable the synchronization, then C++ streams are allowed to have their own independent buffers.
    e.g. 
*/
    cout << "Hello"; 
    printf("World"); 
    cout << "Ciao";
    /*without synchronization you'll never know if you'll get*/ HelloCiaoWorld/* or */HelloWorldCiao/* or */CiaoHelloWorld...
    
    
2.  cin.tie(NULL);

/*
    This unties cin from cout.
    Tied streams ensure that one stream is flushed automatically before each I/O operation on the other stream.
    By default cin is tied to cout to ensure a sensible user interaction. 
    
    For example:
*/  std::cout << "Enter name:";
    std::cin >> name;
    /*if you untie cin from cout, you must make sure to flush cout manually every time you
    want to display something before expecting input on cin*/
