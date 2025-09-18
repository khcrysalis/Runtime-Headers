@class NSString;

@interface PHFaceGroup : PHObject <PNFaceGroupProtocol>

@property (readonly, nonatomic) NSString *localIdentifier;
@property (readonly, nonatomic) unsigned long long faceCountInFaceGroup;
@property (readonly, nonatomic) BOOL isDirty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long personModelId;
@property (readonly, nonatomic) long long personBuilderState;
@property (readonly, nonatomic) long long unnamedFaceCount;

+ (id)entityKeyMap;
+ (id)fetchEmptyFaceGroupsWithOptions:(id)a0;
+ (id)fetchFaceGroupsForPerson:(id)a0 options:(id)a1;
+ (id)fetchFaceGroupsGroupedByFaceLocalIdentifierForFaces:(id)a0 options:(id)a1;
+ (id)fetchFaceGroupsWithFace:(id)a0 options:(id)a1;
+ (id)fetchFaceGroupsWithLocalIdentifiers:(id)a0 options:(id)a1;
+ (id)fetchFaceGroupsWithOptions:(id)a0;
+ (id)fetchPredicateFromComparisonPredicate:(id)a0 options:(id)a1;
+ (id)fetchType;
+ (id)identifierCode;
+ (id)managedEntityName;
+ (id)propertiesToFetchWithHint:(unsigned long long)a0;
+ (id)transformValueExpression:(id)a0 forKeyPath:(id)a1;

- (Class)changeRequestClass;
- (long long)getPersonModelId;
- (id)initWithFetchDictionary:(id)a0 propertyHint:(unsigned long long)a1 photoLibrary:(id)a2;

@end
