/**
 * @param {string} s
 * @return {number}
 */
var romanToInt = function(s) {
    const val = new Map();
    val.set('I',1);
    val.set('V',5);
    val.set('X',10);
    val.set('L',50);
    val.set('C',100);
    val.set('D',500);
    val.set('M',1000);
    
    let result=val.get(s[s.length-1]);
    for(var i=s.length-2;i>=0;i--)
    {
        if(val.get(s[i])<val.get(s[i+1])) {
            result-=val.get(s[i]);
        }
        else {
            result+=val.get(s[i]);
        }
    }
    return result;
        
};