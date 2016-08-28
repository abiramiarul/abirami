public List<String> anagrams(String[] strs) {
    ArrayList<String> result = new ArrayList<String>();
    if(strs == null || strs.length == 0)
        return result;
 
    HashMap<String, ArrayList<Integer>> map = new HashMap<String, ArrayList<Integer>>();
    for(int i=0; i<strs.length; i++){
        char[] arr = strs[i].toCharArray();
        Arrays.sort(arr);
        String t = String.valueOf(arr);
        if(map.get(t) == null){
            ArrayList<Integer> l = new ArrayList<Integer>();
            l.add(i);
            map.put(t, l);
        }else{
            map.get(t).add(i);
        }
    }
 
    for(ArrayList<Integer> l: map.values()){
        if(l.size() > 1){
            for(Integer i: l){
                result.add(strs[i]);
            }
        }
    }
 
    return result;
}
