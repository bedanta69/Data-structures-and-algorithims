//O(n) refers to linear time 
//it basically refers to that number of operations will be same as number of input 
//O(n) gives a straight line passing through the origin in the graph of number of elements to number of operations
//example of such a code:

let a = [1, 2, 3, 4, 5]

function find5(input) {
    for (let i = 0; i < input.length; i++) {
        if (input[i] == 5) {
            console.log('found 5')
        }
    }
}
find5(a)