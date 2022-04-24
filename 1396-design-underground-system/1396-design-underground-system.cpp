class UndergroundSystem {
public:
	//transit stores id, <st name, time>
	map<int,pair<string,int>> transit;
	// travel stores <start st, end st>, <totalTime, count>
	map<pair<string,string>, pair<double,double>> total;
	UndergroundSystem()
	{
		transit.clear();
		total.clear();
	}
	void checkIn(int id,string stationName, int t)
	{
		transit[id]={stationName,t};
	}
	void checkOut(int id,string stationName, int t)
	{
		total[{transit[id].first,stationName}]=
		{total[{transit[id].first,stationName}].first+(t-transit[id].second),
			total[{transit[id].first,stationName}].second+1};
	}
	double getAverageTime(string startStation,string endStation)
	{
		double avg=total[{startStation,endStation}].first/total[{startStation,endStation}].second;
		return avg;
	}
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */