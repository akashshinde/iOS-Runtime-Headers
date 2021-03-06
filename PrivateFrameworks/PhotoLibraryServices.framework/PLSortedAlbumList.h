/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <NSObject><NSCopying>, NSMutableOrderedSet, NSObject<PLAlbumContainer>, NSString;

@interface PLSortedAlbumList : NSObject <PLAlbumContainer, PLIndexMappingCache> {
    struct NSObject { Class x1; } *_backingAlbumList;
    struct __CFArray { } *_fromBackingMap;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _sortComparator;

    struct __CFArray { } *_toBackingMap;
    NSMutableOrderedSet *_weak_albums;
}

@property(retain) NSMutableOrderedSet * _albums;
@property(retain,readonly) NSString * _prettyDescription;
@property(retain,readonly) NSString * _typeDescription;
@property(readonly) unsigned int albumsCount;
@property(copy,readonly) id albumsSortingComparator;
@property(retain) NSObject<PLAlbumContainer> * backingAlbumList;
@property(copy,readonly) <NSObject><NSCopying> * cachedIndexMapState;
@property(readonly) unsigned int containersCount;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) int filter;
@property(readonly) unsigned int hash;
@property(readonly) BOOL isFolder;
@property(copy) id sortComparator;
@property(readonly) Class superclass;
@property(readonly) unsigned int unreadAlbumsCount;

- (id)_albums;
- (id)_prettyDescription;
- (id)_typeDescription;
- (BOOL)albumHasFixedOrder:(struct NSObject { Class x1; }*)arg1;
- (short)albumListType;
- (id)albums;
- (unsigned int)albumsCount;
- (id)albumsSortingComparator;
- (struct NSObject { Class x1; }*)backingAlbumList;
- (id)cachedIndexMapState;
- (BOOL)canEditAlbums;
- (BOOL)canEditContainers;
- (id)containers;
- (unsigned int)containersCount;
- (id)containersRelationshipName;
- (unsigned int)countOfSortedAlbums;
- (void)createSortedIndexesMap;
- (void)dealloc;
- (Class)derivedChangeNotificationClass;
- (int)filter;
- (BOOL)hasAtLeastOneAlbum;
- (id)identifier;
- (unsigned int)indexInSortedAlbumsOfObject:(id)arg1;
- (id)initWithAlbumList:(struct NSObject { Class x1; }*)arg1 sortComparator:(id)arg2;
- (void)insertObject:(id)arg1 inSortedAlbumsAtIndex:(unsigned int)arg2;
- (BOOL)isEmpty;
- (BOOL)isFolder;
- (id)managedObjectContext;
- (BOOL)mappedDataSourceChanged:(id)arg1 remoteNotificationData:(id)arg2;
- (BOOL)needsReordering;
- (id)objectInSortedAlbumsAtIndex:(unsigned int)arg1;
- (id)photoLibrary;
- (void)preheatAlbumsAtIndexes:(id)arg1 forProperties:(id)arg2 relationships:(id)arg3;
- (void)preheatAlbumsForProperties:(id)arg1 relationships:(id)arg2;
- (void)removeObjectFromSortedAlbumsAtIndex:(unsigned int)arg1;
- (void)replaceObjectInSortedAlbumsAtIndex:(unsigned int)arg1 withObject:(id)arg2;
- (void)setBackingAlbumList:(struct NSObject { Class x1; }*)arg1;
- (void)setNeedsReordering;
- (void)setSortComparator:(id)arg1;
- (void)set_albums:(id)arg1;
- (id)sortComparator;
- (unsigned int)unreadAlbumsCount;
- (void)updateAlbumsOrderIfNeeded;

@end
