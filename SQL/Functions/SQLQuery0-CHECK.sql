--SQLQuery0-CHECK.sql
USE PV_522_Import;
SET DATEFIRST 1;

--PRINT dbo.GetLastLearningDate(N'PV_522');
--EXEC sp_SelectSchedule;

--DROP #Groups;

--SELECT group_name, direction_name INTO #Groups 
--FROM Groups,Directions 
--WHERE	direction	=	direction_id
--AND		group_name LIKE N'PV_%'
--;

--SELECT * FROM #Groups;

--PRINT dbo.GetNextLearningDay(N'PV_522', N'2026-03-19')
--PRINT dbo.GetNextLearningDate(N'PV_522', N'2026-03-21')

--PRINT dbo.GetNewYearHolidaysStartDate(2025);
--PRINT dbo.GetSummerHolidaysStartDate(2025);
--PRINT dbo.GetEasterDate(2022);

PRINT dbo.GetHolidaysStartDate(2026, N'Новогодние%');
PRINT dbo.GetHolidaysStartDate(2026, N'23%');
PRINT dbo.GetHolidaysStartDate(2026, N'8%');
PRINT dbo.GetHolidaysStartDate(2026, N'Пасха');
PRINT dbo.GetHolidaysStartDate(2026, N'Майские%');
PRINT dbo.GetHolidaysStartDate(2026, N'Летние%');