def twt_close(n_tweets, n_clicks):
    tweet_area = [0 for i in range(n_tweets)]
    for click in range(n_clicks):
        button = input()
        if button == 'CLOSEALL':
            print(0)
        else:
            button_number = int(button.split(' ')[1])
            tweet_area[button_number] = 1 if tweet_area[button_number] == 0 else 0
            print(tweet_area.count(1))

if __name__ == "__main__":
    inpt = input().split(' ')
    n_tweets, n_clicks = int(inpt[0]), int(inpt[1])
    twt_close(n_tweets, n_clicks)