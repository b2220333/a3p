/* Processes a match win for the specified user for leaderboards */
handlers.handleMatchWin = function(args, context) {

    var request = {
        PlayFabId: currentPlayerId, Statistics: [{
            StatisticName: "Wins",
            Value: 1
        }]
    };

    var playerStatResult = server.UpdatePlayerStatistics(request);
}