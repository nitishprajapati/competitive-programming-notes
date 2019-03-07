

/*      Set         */

1.  set<t> bla;                           /* Sorted set,
                                             O(log(n)) insertion,
                                             unique storage of elements,
                                             ascending
                                          */
   
   
/*--------------------------------------------------------------------------------*/   
   
/*      Multiset    */

1.  multiset<t> bla;                       /* Sorted,
                                              O(log(n)) insertion,
                                              repeated storage of elements allowed, 
                                              ascending
                                           */

2.  multiset<t, greater<int> > bla;        /* Sorted,
                                              O(log(n)) insertion,
                                              repeated storage of elements allowed, 
                                              descending
                                           */
                                           
/*--------------------------------------------------------------------------------*/

/*      Fetching an elements in set/multiset by Index   */

1.      set/multiset<t> blabla;
        set/multiset<t> :: iterator it;
        it = blabla.begin();
        std::advance(it, index_you_want_to_go);
        value = *it;
