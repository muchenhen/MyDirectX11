#pragma once

class GameTimer
{
public:
	GameTimer();

	//����Ϸʱ��
	float TotalTime() const;
	//֡���ʱ��
	float DeltaTime() const;

	//����Ϣѭ��֮ǰ����
	void Reset();
	//��ȡ����ͣ��ʱ�����
	void Start();
	//��ͣʱ����
	void Stop();
	//ÿһ֡����
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