//Update record of the segment tree as per given index


void updateRec(int ss, int se, int i, int si, int diff, int tree[])
{
    if(i < ss || i > se) 
        return;
        
    tree[si] = tree[si] + diff;
    
    if(se > ss)
    {
        int mid = (ss + se) / 2;
        
        updateRec(ss, mid, i, 2 * si + 1, diff, tree);
        updateRec(mid + 1, se, i, 2 * si + 2, diff, tree);
        
    }
}

Time complexity - O(n)
