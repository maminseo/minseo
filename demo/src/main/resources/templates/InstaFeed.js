var userFeed = new Instafeed({
    get: 'user',
    userId: '8714989895283926',
    clientId: '619499290444537',
    accessToken: 'IGQWRNV1lhQzFERE5sMnNhb2V3WUFOSklIdHJyY3BHdDhZASC0wdEJydGFJeDJoY0NoVlNrWk9OaU5oOFhWWUJUbU1sVEVLSTllbjZAabmVIQjRxZA196TTctMUNaLS1pVWx1WlpKV3VtME9BZAwZDZD',
    resolution: 'standard_resolution',
    template: '<a href="{{link}}" target="_blank" id="{{id}}"><img src="{{image}}" /></a>',
    sortBy: 'most-recent',
    limit: 4,
    links: false
  });
  userFeed.run();