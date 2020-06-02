// cnt contains min path reverse required
	int cnt=0;
    
	// have_path contains all the nodes from which 
	// a path to 0 is possible
	unordered_set <int> have_path;
    have_path.insert(0);
	
    // Iterating over all the edges
    for(vector <int> t: connections)
    {
        // If the current edge leads to an element 
        // which already leads to 0
        if(have_path.find(t[1])!=have_path.end())
            have_path.insert(t[0]);
        else
        // If current edge is directed away from the element leads to zero 
        // then increment cnt and add the other node
        if(have_path.find(t[0])!=have_path.end())
        {
            have_path.insert(t[1]);
            cnt++;
        }
    }
    return cnt;
