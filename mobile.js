const phones =[
    {name : 'walton',price: 15000,camera:'12mp'},
    {name : 'xioami',price: 10000,camera:'12mp'},
    {name : 'oppo',price: 5000,camera:'12mp'},
    {name : 'samsung',price: 20000,camera:'12mp'}
]
function getCheapest (phones)
{
    let min =phones[0];
 
    for (phone of phones)
        {
        
        if(phone.price < min.price){
            min = phone
        }
    }
    return min;
}
const cheap= getCheapest(phones);
console.log('cheapest phone is:',cheap);
