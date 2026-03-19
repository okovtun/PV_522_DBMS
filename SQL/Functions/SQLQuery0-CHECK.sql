--SQLQuery0-CHECK.sql
USE PV_522_Import;

PRINT dbo.GetLastLearningDate(N'PV_522');
--EXEC sp_SelectSchedule;

--DROP #Groups;

--SELECT group_name, direction_name INTO #Groups 
--FROM Groups,Directions 
--WHERE	direction	=	direction_id
--AND		group_name LIKE N'PV_%'
--;

--SELECT * FROM #Groups;

SELECT * INTO #Numbers FROM		(3), (5), (8), (13), (21);


SELECT * FROM #Numbers;

int Add(int a, int b)
{
	return a+b;
}
void main()
{
	--cout << Add(2,3) << endl;
	int res = Add(2,3);
	cout << res << endl;
}