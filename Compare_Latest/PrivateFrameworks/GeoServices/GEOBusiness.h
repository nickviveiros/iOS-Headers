/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

#import "NSCopying-Protocol.h"

@class GEOLatLng, NSMutableArray, NSString;

@interface GEOBusiness : PBCodable <NSCopying>
{
    unsigned long long _uID;
    NSMutableArray *_attributeKeyValues;
    NSMutableArray *_attributions;
    NSMutableArray *_categorys;
    GEOLatLng *_center;
    NSMutableArray *_localizedCategories;
    NSString *_mapsURL;
    NSString *_name;
    NSString *_notice;
    NSMutableArray *_openHours;
    NSString *_phoneticName;
    NSString *_phoneticNotice;
    NSMutableArray *_photos;
    NSMutableArray *_ratings;
    NSMutableArray *_sources;
    NSMutableArray *_starRatings;
    NSString *_telephone;
    unsigned int _totalNumberOfPhotos;
    NSString *_uRL;
    int _version;
    _Bool _canBeCorrectedByBusinessOwner;
    _Bool _isClosed;
    _Bool _isUnverified;
    struct {
        unsigned int uID:1;
        unsigned int totalNumberOfPhotos:1;
        unsigned int version:1;
        unsigned int canBeCorrectedByBusinessOwner:1;
        unsigned int isClosed:1;
        unsigned int isUnverified:1;
    } _has;
}

@property(retain, nonatomic) NSMutableArray *starRatings; // @synthesize starRatings=_starRatings;
@property(retain, nonatomic) NSMutableArray *sources; // @synthesize sources=_sources;
@property(nonatomic) _Bool canBeCorrectedByBusinessOwner; // @synthesize canBeCorrectedByBusinessOwner=_canBeCorrectedByBusinessOwner;
@property(retain, nonatomic) NSMutableArray *attributions; // @synthesize attributions=_attributions;
@property(retain, nonatomic) NSMutableArray *localizedCategories; // @synthesize localizedCategories=_localizedCategories;
@property(nonatomic) unsigned int totalNumberOfPhotos; // @synthesize totalNumberOfPhotos=_totalNumberOfPhotos;
@property(retain, nonatomic) GEOLatLng *center; // @synthesize center=_center;
@property(retain, nonatomic) NSMutableArray *openHours; // @synthesize openHours=_openHours;
@property(retain, nonatomic) NSMutableArray *attributeKeyValues; // @synthesize attributeKeyValues=_attributeKeyValues;
@property(retain, nonatomic) NSMutableArray *photos; // @synthesize photos=_photos;
@property(retain, nonatomic) NSMutableArray *categorys; // @synthesize categorys=_categorys;
@property(retain, nonatomic) NSMutableArray *ratings; // @synthesize ratings=_ratings;
@property(retain, nonatomic) NSString *mapsURL; // @synthesize mapsURL=_mapsURL;
@property(nonatomic) _Bool isClosed; // @synthesize isClosed=_isClosed;
@property(nonatomic) _Bool isUnverified; // @synthesize isUnverified=_isUnverified;
@property(retain, nonatomic) NSString *uRL; // @synthesize uRL=_uRL;
@property(retain, nonatomic) NSString *telephone; // @synthesize telephone=_telephone;
@property(retain, nonatomic) NSString *phoneticNotice; // @synthesize phoneticNotice=_phoneticNotice;
@property(retain, nonatomic) NSString *phoneticName; // @synthesize phoneticName=_phoneticName;
@property(retain, nonatomic) NSString *notice; // @synthesize notice=_notice;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) int version; // @synthesize version=_version;
@property(nonatomic) unsigned long long uID; // @synthesize uID=_uID;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)starRatingAtIndex:(unsigned long long)arg1;
- (unsigned long long)starRatingsCount;
- (void)addStarRating:(id)arg1;
- (void)clearStarRatings;
- (id)sourceAtIndex:(unsigned long long)arg1;
- (unsigned long long)sourcesCount;
- (void)addSource:(id)arg1;
- (void)clearSources;
@property(nonatomic) _Bool hasCanBeCorrectedByBusinessOwner;
- (id)attributionAtIndex:(unsigned long long)arg1;
- (unsigned long long)attributionsCount;
- (void)addAttribution:(id)arg1;
- (void)clearAttributions;
- (id)localizedCategoriesAtIndex:(unsigned long long)arg1;
- (unsigned long long)localizedCategoriesCount;
- (void)addLocalizedCategories:(id)arg1;
- (void)clearLocalizedCategories;
@property(nonatomic) _Bool hasTotalNumberOfPhotos;
@property(readonly, nonatomic) _Bool hasCenter;
- (id)openHoursAtIndex:(unsigned long long)arg1;
- (unsigned long long)openHoursCount;
- (void)addOpenHours:(id)arg1;
- (void)clearOpenHours;
- (id)attributeKeyValueAtIndex:(unsigned long long)arg1;
- (unsigned long long)attributeKeyValuesCount;
- (void)addAttributeKeyValue:(id)arg1;
- (void)clearAttributeKeyValues;
- (id)photoAtIndex:(unsigned long long)arg1;
- (unsigned long long)photosCount;
- (void)addPhoto:(id)arg1;
- (void)clearPhotos;
- (id)categoryAtIndex:(unsigned long long)arg1;
- (unsigned long long)categorysCount;
- (void)addCategory:(id)arg1;
- (void)clearCategorys;
- (id)ratingAtIndex:(unsigned long long)arg1;
- (unsigned long long)ratingsCount;
- (void)addRating:(id)arg1;
- (void)clearRatings;
@property(readonly, nonatomic) _Bool hasMapsURL;
@property(nonatomic) _Bool hasIsClosed;
@property(nonatomic) _Bool hasIsUnverified;
@property(readonly, nonatomic) _Bool hasURL;
@property(readonly, nonatomic) _Bool hasTelephone;
@property(readonly, nonatomic) _Bool hasPhoneticNotice;
@property(readonly, nonatomic) _Bool hasPhoneticName;
@property(readonly, nonatomic) _Bool hasNotice;
@property(readonly, nonatomic) _Bool hasName;
@property(nonatomic) _Bool hasVersion;
@property(nonatomic) _Bool hasUID;
- (void)dealloc;

@end

