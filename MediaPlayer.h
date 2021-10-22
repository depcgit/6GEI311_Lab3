#pragma once
#include <dshow.h>
#include <string>
using namespace std;

enum PlaybackState
{
	STATE_UNINITIALIZED,
	STATE_NO_GRAPH,
	STATE_RUNNING,
	STATE_PAUSED,
	STATE_STOPPED,
};

class MediaPlayer 
{
private:
	IGraphBuilder* pGraph;
	IMediaControl* pControl;
	IMediaEvent* pEvent;
	IMediaSeeking* pSeeking;
	HRESULT hr;

	PlaybackState state;

	LONGLONG startPos, stopPos;

	MediaPlayer();
	static MediaPlayer* instance;

public:
	static MediaPlayer* GetInstance();
	static void DeleteInstance();
	~MediaPlayer();

	void Start(LPCWSTR fileIn);
	void Quit();
	void PlayPause();
	void Replay();
	void Accelerate();
};