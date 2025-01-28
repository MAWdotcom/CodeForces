
const prices =[100, 2000,4000,10,80];

function getMin(numbers)
{
    let min =numbers[0];
    for (const num of numbers){
        if (num<min)
        {
            min = num;
        }
    }
    return min;
} 


const cheap =getMin(prices);

console.log('cheapest one is ',cheap);



