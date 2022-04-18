
var leaderboardId = data.Id;
var sortOrder = "HIGH_TO_LOW";
var startIndex = 0;
var endIndex = data.Num - 1;
var results = {};

// Grab the leaderboard service proxy from the bridge
var leaderboardService = bridge.getLeaderboardServiceProxy();

var results = leaderboardService.getGlobalLeaderboardPage(leaderboardId, sortOrder, startIndex, endIndex);

results;
