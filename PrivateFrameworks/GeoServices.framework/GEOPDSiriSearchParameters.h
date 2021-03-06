/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOAddress, GEOPDIndexQueryNode, GEOPDViewportInfo, NSData, NSMutableArray, NSString;

@interface GEOPDSiriSearchParameters : PBCodable <NSCopying> {
    GEOAddress *_address;
    NSMutableArray *_businessCategoryFilters;
    struct { 
        unsigned int maxResultCount : 1; 
        unsigned int sortOrder : 1; 
        unsigned int isStrictMapRegion : 1; 
        unsigned int structuredSearch : 1; 
    } _has;
    GEOPDIndexQueryNode *_indexFilter;
    BOOL _isStrictMapRegion;
    unsigned int _maxResultCount;
    NSString *_searchString;
    NSMutableArray *_searchSubstringDescriptors;
    int _sortOrder;
    BOOL _structuredSearch;
    GEOPDViewportInfo *_viewportInfo;
    NSData *_zilchPoints;
}

@property(retain) GEOAddress * address;
@property(retain) NSMutableArray * businessCategoryFilters;
@property(readonly) BOOL hasAddress;
@property(readonly) BOOL hasIndexFilter;
@property BOOL hasIsStrictMapRegion;
@property BOOL hasMaxResultCount;
@property(readonly) BOOL hasSearchString;
@property BOOL hasSortOrder;
@property BOOL hasStructuredSearch;
@property(readonly) BOOL hasViewportInfo;
@property(readonly) BOOL hasZilchPoints;
@property(retain) GEOPDIndexQueryNode * indexFilter;
@property BOOL isStrictMapRegion;
@property unsigned int maxResultCount;
@property(retain) NSString * searchString;
@property(retain) NSMutableArray * searchSubstringDescriptors;
@property int sortOrder;
@property BOOL structuredSearch;
@property(retain) GEOPDViewportInfo * viewportInfo;
@property(retain) NSData * zilchPoints;

- (void)addBusinessCategoryFilter:(id)arg1;
- (void)addSearchSubstringDescriptor:(id)arg1;
- (id)address;
- (id)businessCategoryFilterAtIndex:(unsigned int)arg1;
- (id)businessCategoryFilters;
- (unsigned int)businessCategoryFiltersCount;
- (void)clearBusinessCategoryFilters;
- (void)clearSearchSubstringDescriptors;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasAddress;
- (BOOL)hasIndexFilter;
- (BOOL)hasIsStrictMapRegion;
- (BOOL)hasMaxResultCount;
- (BOOL)hasSearchString;
- (BOOL)hasSortOrder;
- (BOOL)hasStructuredSearch;
- (BOOL)hasViewportInfo;
- (BOOL)hasZilchPoints;
- (unsigned int)hash;
- (id)indexFilter;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isStrictMapRegion;
- (unsigned int)maxResultCount;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)searchString;
- (id)searchSubstringDescriptorAtIndex:(unsigned int)arg1;
- (id)searchSubstringDescriptors;
- (unsigned int)searchSubstringDescriptorsCount;
- (void)setAddress:(id)arg1;
- (void)setBusinessCategoryFilters:(id)arg1;
- (void)setHasIsStrictMapRegion:(BOOL)arg1;
- (void)setHasMaxResultCount:(BOOL)arg1;
- (void)setHasSortOrder:(BOOL)arg1;
- (void)setHasStructuredSearch:(BOOL)arg1;
- (void)setIndexFilter:(id)arg1;
- (void)setIsStrictMapRegion:(BOOL)arg1;
- (void)setMaxResultCount:(unsigned int)arg1;
- (void)setSearchString:(id)arg1;
- (void)setSearchSubstringDescriptors:(id)arg1;
- (void)setSortOrder:(int)arg1;
- (void)setStructuredSearch:(BOOL)arg1;
- (void)setViewportInfo:(id)arg1;
- (void)setZilchPoints:(id)arg1;
- (int)sortOrder;
- (BOOL)structuredSearch;
- (id)viewportInfo;
- (void)writeTo:(id)arg1;
- (id)zilchPoints;

@end
