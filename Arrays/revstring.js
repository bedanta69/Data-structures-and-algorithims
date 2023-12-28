//create a function that reverse a string
//for example "Hi my name is bedanta" should be:
//"atnadeb si eman ym iH"

//my solution

function revstr(stri) {
    let newstr = []
    for (i = 0; i <= stri.length; i++) {
        newstr.push(stri[stri.length - i]);
    }
    return newstr.join("");
}

