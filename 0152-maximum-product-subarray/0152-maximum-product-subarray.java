class Solution {
    public int maxProduct(int[] nums) {
        int largestProduct = nums[0];
        int minCurrentProduct = nums[0];
        int maxCurrentProduct = nums[0];
        
        for (int i = 1; i < nums.length; i++) {
        	int currentProduct = Math.max(maxCurrentProduct * nums[i], nums[i]);
        	
        	if (minCurrentProduct * nums[i] > currentProduct)
        		currentProduct = minCurrentProduct * nums[i];
        	
        	int temp = Math.min(maxCurrentProduct * nums[i], nums[i]);
        	
        	if (minCurrentProduct * nums[i] > temp)
        		minCurrentProduct = temp;
        	else
        		minCurrentProduct = minCurrentProduct * nums[i];
        	
        	maxCurrentProduct = currentProduct;
        	largestProduct = Math.max(maxCurrentProduct, largestProduct);
        }
        
		return largestProduct;
    }
}