/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTransitServiceGap : PBCodable <GEOServiceGap, NSCopying> {
    unsigned int _absEndTime;
    unsigned int _absStartTime;
    unsigned int _appearsBeforeSuggestedRouteIndex;
    GEOFormattedString *_displayMessage;
    struct { 
        unsigned int absEndTime : 1; 
        unsigned int absStartTime : 1; 
        unsigned int appearsBeforeSuggestedRouteIndex : 1; 
    } _has;
}

@property (nonatomic) unsigned int absEndTime;
@property (nonatomic) unsigned int absStartTime;
@property (nonatomic) unsigned int appearsBeforeSuggestedRouteIndex;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <GEOServerFormattedString> *displayMessagFormatString;
@property (nonatomic, retain) GEOFormattedString *displayMessage;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic) BOOL hasAbsEndTime;
@property (nonatomic) BOOL hasAbsStartTime;
@property (nonatomic) BOOL hasAppearsBeforeSuggestedRouteIndex;
@property (nonatomic, readonly) BOOL hasDisplayMessage;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) unsigned int routeListInsertBeforeIndex;
@property (nonatomic, readonly) NSDate *startDate;
@property (readonly) Class superclass;

- (unsigned int)absEndTime;
- (unsigned int)absStartTime;
- (unsigned int)appearsBeforeSuggestedRouteIndex;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayMessagFormatString;
- (id)displayMessage;
- (id)endDate;
- (BOOL)hasAbsEndTime;
- (BOOL)hasAbsStartTime;
- (BOOL)hasAppearsBeforeSuggestedRouteIndex;
- (BOOL)hasDisplayMessage;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)routeListInsertBeforeIndex;
- (void)setAbsEndTime:(unsigned int)arg1;
- (void)setAbsStartTime:(unsigned int)arg1;
- (void)setAppearsBeforeSuggestedRouteIndex:(unsigned int)arg1;
- (void)setDisplayMessage:(id)arg1;
- (void)setHasAbsEndTime:(BOOL)arg1;
- (void)setHasAbsStartTime:(BOOL)arg1;
- (void)setHasAppearsBeforeSuggestedRouteIndex:(BOOL)arg1;
- (id)startDate;
- (void)writeTo:(id)arg1;

@end
