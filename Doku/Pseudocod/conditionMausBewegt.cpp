
class ConditionMouseNotMovedFor : public eeros::sequencer::Condition {

	public:
	ConditionMouseNotMovedFor(int timeout=5) {}
	
	int period=100;		//in miliseconds
	
	
	bool getConditionState() {
		return conditionState;
	}
	
	void checkCondition() {
		actPosition = HAL.getPosition();
		if (actPosition != lastPosition) {	//mouse moved
			timer.reset();
		}
		if (timer.getTime() > timeout) conditionState = true;
		else conditionState = false;
	}
};


