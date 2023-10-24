// Rule 1 : Worst case
// for example: In a function to find an element of an array
let array = ["dikhyant", "nivir", "bibek", "manas", "bedanta"];
function findbedanta(array) {
    for (let i = 0; i < array.length; i++) {
        if (array[i] == "bedanta") {
            console.log("Found bedanta")
            break;
        }
    }
}

findbedanta(array);
// In the argument array of the function findbedanta the element "bedanta" is considered to be at the last index of array
// This is called the worst case scenerio
// This is the initial case considered while calculating the BiG O of the code
