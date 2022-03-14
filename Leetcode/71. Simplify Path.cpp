/* Problem: Given a string path, which is an absolute path (starting with a slash '/') to a file or directory in a Unix-style file system, 
convert it to the simplified canonical path. 
In a Unix-style file system, a period '.' refers to the current directory, a double period '..' refers to the directory up a level, 
and any multiple consecutive slashes (i.e. '//') are treated as a single slash '/'. 
For this problem, any other format of periods such as '...' are treated as file/directory names.

The canonical path should have the following format:

The path starts with a single slash '/'.
Any two directories are separated by a single slash '/'.
The path does not end with a trailing '/'.
The path only contains the directories on the path from the root directory to the target file or directory (i.e., no period '.' or double period '..')
Return the simplified canonical path.

Input: path = "/home//foo/"
Output: "/home/foo"
Explanation: In the canonical path, multiple consecutive slashes are replaced by a single one.
*/

string simplifyPath(string path) {
     
        vector < string > st;
        string s = "";
        
        // Add a extra '/' in path
        path += '/';
        
        for(int i=0; i<path.size(); i++){
          
            // If found '/' then check the two cases
            // If s = '..' then pop back from the vector
            // Else push it into vector
            if(path[i] == '/') {
                if(s == ".."){
                    if(!st.empty()) st.pop_back();
                }
                else if(s.size() != 0 && s!=".") {
                    st.push_back(s);
                } 
                s = "";
            }
        
            else s += path[i]; 
            
        }
        string str ;
        // Generate string from vector 
        for(auto s: st){
            str += "/" + s;
        }
        
        if(str.size() == 0) return "/";
        else return str;
        
}
