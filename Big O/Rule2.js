//remove constants
function compressBoxesTwice(boxes) { //o(n)
    boxes.forEach(function (boxes) {
        console.log(boxes);
    });

    boxes.forEach(function (boxes) { //o(n)
        console.log(boxes);
    });
}

//o(2n)
//it becomes o(n) remove the 2 because it is not an actual notation