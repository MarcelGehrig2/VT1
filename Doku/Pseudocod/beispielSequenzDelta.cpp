


// Testcase 1
// ///////////

// EEROS-Entwicklung
// /////////////////

class Condition {
public :
	virtual int getConditionState() {	// 0==false; 1==true; else==getConditionState
		return conditionState;
	}
	
	value setPollingIntervall (int pollingIntervallSet) {	// in seconds
		pollingIntervall = pollingIntervallSet;
	}
	
protected:
	int conditionState = 0;		//0==false; 1==true; else==getConditionState
	int pollingIntervall = 0;	//in seconds
	
private:
	
}



// Steuerungsentwicklung
// /////////////////////

class CondEndStopLeft : public Condition {	//true if activated
	int getConditionState() {
		return CS.endStopLeft.getState()
// 		return HAL.endStopLeft.getState()
	}
}

class CondEndStopRight : public Condition {	//true if activated
	int getConditionState() {
		return CS.endStopRight.getState()
// 		return HAL.endStopRight.getState()
	}
}




// Applikationsentwicklung
// ///////////////////////

main{
	
	Condition CondEndStopLeft
	
	
	
}

	new ActionStartSequence actionStartSorting (sequence=sorting, blocking=true);
	
	action.addCondition(Condition conditionMouseNotMovedFor5sec);
	
	
	
	new Sequence waitForInput () {nditionC
		
	