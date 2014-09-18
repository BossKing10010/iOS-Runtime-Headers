/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@class NSMutableArray, NSString;

@interface CIBurstImageStat : NSObject {
    struct FastRegistration_Signatures { 
        float *piRow; 
        unsigned long long nPiRow; 
        struct Projections_meanStdTable { 
            float *sumTable; 
            float *sumSqTable; 
        } piRowTable; 
        float *piCol; 
        unsigned long long nPiCol; 
        struct Projections_meanStdTable { 
            float *sumTable; 
            float *sumSqTable; 
        } piColTable; 
    struct GridROI_t { 
        int startX; 
        int startY; 
        int endX; 
        int endY; 
    struct GridROI_t { 
        int startX; 
        int startY; 
        int endX; 
        int endY; 
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    int AEAverage;
    int AETarget;
    int _AEDelta;
    struct __IOSurface { } *_fullsizeJpegData;
    int _fullsizeJpegSize;
    int _version;
    float actionClusteringScore;
    float actionScore;
    unsigned short aeMatrix[256];
    float avgHorzDiffY;
    float blurExtent;
    boolAEStable;
    boolAFStable;
    booldoLimitedSharpnessAndBlur;
    boolemotionallyRejected;
    boolexclude;
    boolhasRegistrationData;
    boolisGarbage;
    float colorHistogram[1024];
    int dissimilarity;
    NSMutableArray *faceStatArray;
    } facesRoiRect;
    int gridHeight;
    } gridROI;
    int gridWidth;
    NSString *imageId;
    float imageScore;
    float maxSkewness;
    float normalizedFocusScore;
    float normalizedSigma;
    int numEntries;
    int numHWFaces;
    int orientation;
    void *projectionMemoryBlock;
    } projectionSignature;
    float registrationErrorIntegral;
    float registrationErrorX;
    float registrationErrorY;
    float roiSize;
    struct SharpnessGridElement_t { unsigned char x1; unsigned char x2; float x3; } *sharpnessGrid;
    } smoothedROI;
    int temporalOrder;
    double timeReceived;
    double timestamp;
    float tx;
    float ty;
}

@property int AEAverage;
@property int AEDelta;
@property bool AEStable;
@property int AETarget;
@property bool AFStable;
@property float actionClusteringScore;
@property float actionScore;
@property float avgHorzDiffY;
@property float blurExtent;
@property bool doLimitedSharpnessAndBlur;
@property bool emotionallyRejected;
@property bool exclude;
@property NSMutableArray * faceStatArray;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } facesRoiRect;
@property struct __IOSurface { }* fullsizeJpegData;
@property int fullsizeJpegSize;
@property bool hasRegistrationData;
@property NSString * imageId;
@property float imageScore;
@property bool isGarbage;
@property float maxSkewness;
@property int numHWFaces;
@property int orientation;
@property float registrationErrorIntegral;
@property float registrationErrorX;
@property float registrationErrorY;
@property float roiSize;
@property int temporalOrder;
@property double timeReceived;
@property double timestamp;
@property float tx;
@property float ty;
@property int version;

- (int)AEAverage;
- (int)AEDelta;
- (bool)AEStable;
- (int)AETarget;
- (bool)AFStable;
- (float)actionClusteringScore;
- (float)actionScore;
- (unsigned short*)aeMatrix;
- (void)allocateMeanStdPingPongBuffers:(float**)arg1 :(float**)arg2 :(float**)arg3 :(float**)arg4;
- (void)assignMeanStdBuffers:(float*)arg1;
- (float)avgHorzDiffY;
- (float)blurExtent;
- (int)canRegister;
- (void)collapseSharpnessGrid;
- (float*)colorHistogram;
- (long long)compareImageOrder:(id)arg1;
- (long long)compareImageStats:(id)arg1;
- (void)computeAEMatrix:(id)arg1;
- (float)computeAEMatrixDifference:(id)arg1;
- (void)computeBlurStatsOnGrid:(id)arg1;
- (float)computeFacialFocusScoreSum;
- (void)computeImageColorHistogram:(id)arg1;
- (void)computeImageData:(id)arg1 faceIDCounts:(id)arg2;
- (float)computeImageDistance:(id)arg1;
- (void)computeImageProjections:(id)arg1;
- (void)computeImageSharpnessOnGrid:(id)arg1;
- (float)computeRuleOfThreeDistance;
- (float)computeScore:(float)arg1;
- (float)computeSmilePercentage;
- (float)computeSmoothedGridROI:(id)arg1 nextStat:(id)arg2;
- (void)dealloc;
- (bool)doLimitedSharpnessAndBlur;
- (bool)emotionallyRejected;
- (bool)exclude;
- (id)faceStatArray;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })facesRoiRect;
- (void)flagAsGarbage;
- (struct __IOSurface { }*)fullsizeJpegData;
- (int)fullsizeJpegSize;
- (struct GridROI_t { int x1; int x2; int x3; int x4; })getSharpnessAndBlurLimits;
- (bool)hasRegistrationData;
- (id)imageId;
- (float)imageScore;
- (id)initWithIdentifier:(id)arg1;
- (bool)isGarbage;
- (float)maxSkewness;
- (int)numHWFaces;
- (int)orientation;
- (void)performRegistration:(id)arg1 deltaCol:(float*)arg2 deltaRow:(float*)arg3;
- (float)registrationErrorIntegral;
- (float)registrationErrorX;
- (float)registrationErrorY;
- (float)roiSize;
- (void)setAEAverage:(int)arg1;
- (void)setAEDelta:(int)arg1;
- (int)setAEMatrix:(id)arg1;
- (void)setAEStable:(bool)arg1;
- (void)setAETarget:(int)arg1;
- (void)setAFStable:(bool)arg1;
- (void)setActionClusteringScore:(float)arg1;
- (void)setActionScore:(float)arg1;
- (void)setAvgHorzDiffY:(float)arg1;
- (void)setBlurExtent:(float)arg1;
- (void)setDoLimitedSharpnessAndBlur:(bool)arg1;
- (void)setEmotionallyRejected:(bool)arg1;
- (void)setExclude:(bool)arg1;
- (void)setFaceStatArray:(id)arg1;
- (void)setFacesRoiRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFullsizeJpegData:(struct __IOSurface { }*)arg1;
- (void)setFullsizeJpegSize:(int)arg1;
- (void)setHasRegistrationData:(bool)arg1;
- (void)setImageId:(id)arg1;
- (void)setImageScore:(float)arg1;
- (void)setIsGarbage:(bool)arg1;
- (void)setMaxSkewness:(float)arg1;
- (void)setNumHWFaces:(int)arg1;
- (void)setOrientation:(int)arg1;
- (void)setRegistrationErrorIntegral:(float)arg1;
- (void)setRegistrationErrorX:(float)arg1;
- (void)setRegistrationErrorY:(float)arg1;
- (void)setRoiSize:(float)arg1;
- (void)setTemporalOrder:(int)arg1;
- (void)setTimeReceived:(double)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setTx:(float)arg1;
- (void)setTy:(float)arg1;
- (void)setVersion:(int)arg1;
- (int)temporalOrder;
- (double)timeReceived;
- (double)timestamp;
- (float)tx;
- (float)ty;
- (void)updateROI:(struct GridROI_t { int x1; int x2; int x3; int x4; })arg1;
- (int)version;
- (void)writeGridROI:(id)arg1;

@end