#pragma once

class GameTimer
{
public:
	GameTimer();

	//总游戏时间
	float TotalTime() const;
	//帧间隔时间
	float DeltaTime() const;

	//在消息循环之前调用
	void Reset();
	//在取消暂停的时候调用
	void Start();
	//暂停时调用
	void Stop();
	//每一帧调用
	void Tick();

private:
	double mSecondsPerCount;
	double mDeltaTime;

	__int64 mBaseTime;
	__int64 mPausedTime;
	__int64 mStopTime;
	__int64 mPrevTime;
	__int64 mCurrTime;

	bool mStopped;
};