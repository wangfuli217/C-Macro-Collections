#include "sep.h"

CMC_COLLECTION_GENERATE_SOURCE(LIST, l, list, /* K */, int)
CMC_COLLECTION_GENERATE_SOURCE(STACK, s, stack, /* K */, int)
CMC_COLLECTION_GENERATE_SOURCE(QUEUE, q, queue, /* K */, int)
CMC_COLLECTION_GENERATE_SOURCE(DEQUE, d, deque, /* K */, int)
CMC_COLLECTION_GENERATE_SOURCE(LINKEDLIST, ll, linked, /* K */, int)
CMC_COLLECTION_GENERATE_SOURCE(HEAP, h, heap, /* K */, int)
CMC_COLLECTION_GENERATE_SOURCE(TREESET, ts, tset, /* K */, int)
CMC_COLLECTION_GENERATE_SOURCE(TREEMAP, tm, tmap, int, int)
CMC_COLLECTION_GENERATE_SOURCE(HASHSET, hs, hset, /* K */, int)
CMC_COLLECTION_GENERATE_SOURCE(HASHMAP, hm, hmap, int, int)

CMC_COLLECTION_GENERATE_SOURCE(INTERVALHEAP, ih, iheap, , int)
CMC_COLLECTION_GENERATE_SOURCE(MULTIMAP, mm, mmap, int, int)
CMC_COLLECTION_GENERATE_SOURCE(MULTISET, ms, mset, , int)
