Initialize some variables:
​
n - Number of nodes of the graph.
mstCost - Cost to build the MST.
edgesUsed - Number of edges included in the MST.
inMST - Array to track which nodes are already part of the MST.
minDist - Array to track the minimum edge weight to reach the i th node from any node that is already in the tree.
​
Initially, we start with node 00, and the cost to reach this node will be 00. To signify this, we set minDist[0]minDist[0] equal to 00.
​
We will try adding nodes to our MST until edgesUsededgesUsed becomes equal to nn.
​
We pick the node which uses the lowest weight edge and is not present in the MST.
We increment edgesUsededgesUsed by 11, mark this node as included in the MST, and add the edge weight used to reach this node to the mstCostmstCost.
Try updating the minimum distance to all adjacent nodes in minDistminDist.
We return the total cost of the MST, mstCostmstCost.