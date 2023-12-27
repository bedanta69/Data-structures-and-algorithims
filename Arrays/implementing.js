//creating an array from scratch with few properties
class Myarray {
    constructor() {
        this.length = 0; //adding the length property
        this.data = {}; //adding the data property
    }
    get(index) {                   //adding the get method
        return this.data[index];
    }
    push(item) {                   //adding the push method
        this.data[this.length] = item
        this.length++
        return this.length;
    }
    pop() {                        //adding the pop method 
        const lastitem = this.data[this.length - 1]
        delete this.data[this, length - 1]
        this.length--
        return lastitem;
    }
    delete(index) {                 //adding the delete method
        const item = this.data[index];
        this.shiftitems[index]
    }
    shiftitems(index) {            //adding the shift item property
        for (let i = index; i < this.length - 1; i++) {
            this.data[i] = this.data[i + 1];
            delete this.data[this.length - 1]
            this.length--

        }
    }
}


