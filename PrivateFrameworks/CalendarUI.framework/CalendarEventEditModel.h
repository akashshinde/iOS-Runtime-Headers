/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/CalendarUI.framework/CalendarUI
 */

@class NSMutableArray, NSString;



@interface CalendarEventEditModel : NSObject 
{
    struct CalDatabase { } *_database;
    struct CalEventOccurrence { } *_occurrence;
    struct { 
        NSInteger year; 
        BOOL month; 
        BOOL day; 
        BOOL hour; 
        BOOL minute; 
        double second; 
    } _occurrenceDateGr;
    struct { 
        NSInteger year; 
        BOOL month; 
        BOOL day; 
        BOOL hour; 
        BOOL minute; 
        double second; 
    } _occurrenceEndDateGr;
    BOOL _allDay;
    NSInteger _eventId;
    void *_event;
    NSInteger _calendarId;
    void *_calendar;
    NSInteger _status;
    NSString *_comment;
    NSMutableArray *_alarms;
    NSMutableArray *_recurrences;
    struct { 
        unsigned int dirty : 1; 
        unsigned int datesDirty : 1; 
        unsigned int calendarDirty : 1; 
        unsigned int alarmsDirty : 1; 
        unsigned int recurrencesDirty : 1; 
        unsigned int statusDirty : 1; 
        unsigned int commentDirty : 1; 
        unsigned int extra : 25; 
    } _modelFlags;
}

+ (id)_externalChangeUserInfoDict;

- (id)initWithOccurrence:(struct CalEventOccurrence { }*)arg1;
- (id)initWithDatabase:(struct CalDatabase { }*)arg1;
- (void)dealloc;
- (struct CalDatabase { }*)database;
- (struct CalEventOccurrence { }*)occurrence;
- (void)setOccurrence:(struct CalEventOccurrence { }*)arg1;
- (void*)event;
- (void)setStartDate:(struct { NSInteger x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })arg1;
- (struct { NSInteger x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })startDate;
- (struct { NSInteger x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })startDatePinnedForAllDay;
- (void)setEndDate:(struct { NSInteger x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })arg1;
- (struct { NSInteger x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })endDate;
- (struct { NSInteger x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })endDatePinnedForAllDay;
- (void)setAllDay:(BOOL)arg1;
- (BOOL)isAllDay;
- (NSInteger)status;
- (NSInteger)status:(BOOL*)arg1;
- (void)setStatus:(NSInteger)arg1;
- (id)responseComment;
- (void)setResponseComment:(id)arg1;
- (void*)calendar;
- (void)setCalendar:(void*)arg1;
- (id)_alarmEditModels;
- (id)alarmEditModels;
- (void)addAlarmEditModel:(id)arg1;
- (void)removeAlarmEditModelAtIndex:(NSInteger)arg1;
- (void)replaceAlarmEditModelAtIndex:(NSInteger)arg1 withAlarmEditModel:(id)arg2;
- (id)_recurrenceEditModels;
- (id)recurrenceEditModels;
- (void)addRecurrenceEditModel:(id)arg1;
- (void)removeRecurrenceEditModelAtIndex:(NSInteger)arg1;
- (void)replaceRecurrenceEditModelAtIndex:(NSInteger)arg1 withRecurrenceEditModel:(id)arg2;
- (void)commit;
- (BOOL)revalidate;

@end