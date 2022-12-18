// Given an array of integers as input, output the indices of two numbers in the array which add up to a specified target.

// Assume that each input would have exactly one solution and you cannot use the same element twice. If 2 different elements have the same value, they can be used.

// Print the indices in increasing order.

//Using hash map

function twoSum(nums, target) {

    let n = nums.length;

    let mapp = new Map();
    mapp.set(nums[0], 0)


    for (let i = 1; i < n; i++) {
        let key = target - nums[i];3

        let search = mapp.has(key);
        if (search) {
            let first =  mapp.get(key);
            let second = i;
            return [first,second];
        }

        mapp.set(nums[i], i);
    }
    return[0,0]


}

    
function main() {
    let n = parseInt(readLine(), 10);
    let nums = readIntArr();
    let target = parseInt(readLine(), 10);
    let result = twoSum(nums, target);
    console.log(result[0], result[1]);
}