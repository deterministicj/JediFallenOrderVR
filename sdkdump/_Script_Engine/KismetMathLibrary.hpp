#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Box.hpp"
#include "..\_Script_CoreUObject\Box2D.hpp"
#include "..\_Script_CoreUObject\Color.hpp"
#include "..\_Script_CoreUObject\DateTime.hpp"
#include "..\_Script_CoreUObject\FrameNumber.hpp"
#include "..\_Script_CoreUObject\FrameRate.hpp"
#include "..\_Script_CoreUObject\IntVector.hpp"
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_CoreUObject\Plane.hpp"
#include "..\_Script_CoreUObject\QualifiedFrameTime.hpp"
#include "..\_Script_CoreUObject\RandomStream.hpp"
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Timespan.hpp"
#include "..\_Script_CoreUObject\Transform.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "BlueprintFunctionLibrary.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_CoreUObject {
struct Matrix;
}
namespace _Script_Engine {
struct VectorSpringState;
}
namespace _Script_Engine {
struct FloatSpringState;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct KismetMathLibrary : public BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    int32_t Xor_IntInt(int32_t A, int32_t B);
    float VSizeXY(_Script_CoreUObject::Vector A);
    float VSizeSquared(_Script_CoreUObject::Vector A);
    float VSize2DSquared(_Script_CoreUObject::Vector2D A);
    float VSize2D(_Script_CoreUObject::Vector2D A);
    float VSize(_Script_CoreUObject::Vector A);
    _Script_CoreUObject::Vector VLerp(_Script_CoreUObject::Vector A, _Script_CoreUObject::Vector B, float Alpha);
    _Script_CoreUObject::Vector VInterpTo_Constant(_Script_CoreUObject::Vector current, _Script_CoreUObject::Vector Target, float DeltaTime, float InterpSpeed);
    _Script_CoreUObject::Vector VInterpTo(_Script_CoreUObject::Vector current, _Script_CoreUObject::Vector Target, float DeltaTime, float InterpSpeed);
    _Script_CoreUObject::Vector VectorSpringInterp(_Script_CoreUObject::Vector current, _Script_CoreUObject::Vector Target, _Script_Engine::VectorSpringState& SpringState, float Stiffness, float CriticalDampingFactor, float DeltaTime, float Mass);
    _Script_CoreUObject::Vector2D Vector2DInterpTo_Constant(_Script_CoreUObject::Vector2D current, _Script_CoreUObject::Vector2D Target, float DeltaTime, float InterpSpeed);
    _Script_CoreUObject::Vector2D Vector2DInterpTo(_Script_CoreUObject::Vector2D current, _Script_CoreUObject::Vector2D Target, float DeltaTime, float InterpSpeed);
    _Script_CoreUObject::Vector VEase(_Script_CoreUObject::Vector A, _Script_CoreUObject::Vector B, float Alpha, void* EasingFunc, float BlendExp, int32_t Steps);
    _Script_CoreUObject::DateTime UtcNow();
    _Script_CoreUObject::Rotator TransformRotation(_Script_CoreUObject::Transform& T, _Script_CoreUObject::Rotator Rotation);
    _Script_CoreUObject::Vector TransformLocation(_Script_CoreUObject::Transform& T, _Script_CoreUObject::Vector Location);
    _Script_CoreUObject::Vector TransformDirection(_Script_CoreUObject::Transform& T, _Script_CoreUObject::Vector Direction);
    float Transform_Determinant(_Script_CoreUObject::Transform& Transform);
    _Script_CoreUObject::DateTime Today();
    _Script_CoreUObject::Transform TLerp(_Script_CoreUObject::Transform& A, _Script_CoreUObject::Transform& B, float Alpha, void* InterpMode);
    _Script_CoreUObject::Transform TInterpTo(_Script_CoreUObject::Transform& current, _Script_CoreUObject::Transform& Target, float DeltaTime, float InterpSpeed);
    _Script_CoreUObject::Timespan TimespanZeroValue();
    float TimespanRatio(_Script_CoreUObject::Timespan A, _Script_CoreUObject::Timespan B);
    _Script_CoreUObject::Timespan TimespanMinValue();
    _Script_CoreUObject::Timespan TimespanMaxValue();
    bool TimespanFromString(void* TimespanString, _Script_CoreUObject::Timespan& Result);
    _Script_CoreUObject::Transform TEase(_Script_CoreUObject::Transform& A, _Script_CoreUObject::Transform& B, float Alpha, void* EasingFunc, float BlendExp, int32_t Steps);
    float Tan(float A);
    _Script_CoreUObject::Vector Subtract_VectorVector(_Script_CoreUObject::Vector A, _Script_CoreUObject::Vector B);
    _Script_CoreUObject::Vector Subtract_VectorInt(_Script_CoreUObject::Vector A, int32_t B);
    _Script_CoreUObject::Vector Subtract_VectorFloat(_Script_CoreUObject::Vector A, float B);
    _Script_CoreUObject::Vector2D Subtract_Vector2DVector2D(_Script_CoreUObject::Vector2D A, _Script_CoreUObject::Vector2D B);
    _Script_CoreUObject::Vector2D Subtract_Vector2DFloat(_Script_CoreUObject::Vector2D A, float B);
    _Script_CoreUObject::Timespan Subtract_TimespanTimespan(_Script_CoreUObject::Timespan A, _Script_CoreUObject::Timespan B);
    int32_t Subtract_IntInt(int32_t A, int32_t B);
    float Subtract_FloatFloat(float A, float B);
    _Script_CoreUObject::DateTime Subtract_DateTimeTimespan(_Script_CoreUObject::DateTime A, _Script_CoreUObject::Timespan B);
    _Script_CoreUObject::Timespan Subtract_DateTimeDateTime(_Script_CoreUObject::DateTime A, _Script_CoreUObject::DateTime B);
    void* Subtract_ByteByte(void* A, void* B);
    float Square(float A);
    float Sqrt(float A);
    float Sin(float A);
    int32_t SignOfInteger(int32_t A);
    float SignOfFloat(float A);
    void SetRandomStreamSeed(_Script_CoreUObject::RandomStream& Stream, int32_t NewSeed);
    _Script_CoreUObject::Vector SelectVector(_Script_CoreUObject::Vector A, _Script_CoreUObject::Vector B, bool bPickA);
    _Script_CoreUObject::Transform SelectTransform(_Script_CoreUObject::Transform& A, _Script_CoreUObject::Transform& B, bool bPickA);
    void* SelectString(void* A, void* B, bool bPickA);
    _Script_CoreUObject::Rotator SelectRotator(_Script_CoreUObject::Rotator A, _Script_CoreUObject::Rotator B, bool bPickA);
    _Script_CoreUObject::Object* SelectObject(_Script_CoreUObject::Object* A, _Script_CoreUObject::Object* B, bool bSelectA);
    int32_t SelectInt(int32_t A, int32_t B, bool bPickA);
    float SelectFloat(float A, float B, bool bPickA);
    _Script_CoreUObject::LinearColor SelectColor(_Script_CoreUObject::LinearColor A, _Script_CoreUObject::LinearColor B, bool bPickA);
    void* SelectClass(void* A, void* B, bool bSelectA);
    void SeedRandomStream(_Script_CoreUObject::RandomStream& Stream);
    int32_t Round(float A);
    _Script_CoreUObject::Rotator RotatorFromAxisAndAngle(_Script_CoreUObject::Vector Axis, float Angle);
    _Script_CoreUObject::Vector RotateAngleAxis(_Script_CoreUObject::Vector InVect, float AngleDeg, _Script_CoreUObject::Vector Axis);
    _Script_CoreUObject::Rotator RLerp(_Script_CoreUObject::Rotator A, _Script_CoreUObject::Rotator B, float Alpha, bool bShortestPath);
    _Script_CoreUObject::Rotator RInterpTo_Constant(_Script_CoreUObject::Rotator current, _Script_CoreUObject::Rotator Target, float DeltaTime, float InterpSpeed);
    _Script_CoreUObject::Rotator RInterpTo(_Script_CoreUObject::Rotator current, _Script_CoreUObject::Rotator Target, float DeltaTime, float InterpSpeed);
    void RGBToHSV_Vector(_Script_CoreUObject::LinearColor RGB, _Script_CoreUObject::LinearColor& HSV);
    void RGBToHSV(_Script_CoreUObject::LinearColor InColor, float& H, float& S, float& V, float& A);
    void ResetVectorSpringState(_Script_Engine::VectorSpringState& SpringState);
    void ResetRandomStream(_Script_CoreUObject::RandomStream& Stream);
    void ResetFloatSpringState(_Script_Engine::FloatSpringState& SpringState);
    _Script_CoreUObject::Rotator REase(_Script_CoreUObject::Rotator A, _Script_CoreUObject::Rotator B, float Alpha, bool bShortestPath, void* EasingFunc, float BlendExp, int32_t Steps);
    _Script_CoreUObject::Vector RandomUnitVectorInEllipticalConeInRadiansFromStream(_Script_CoreUObject::Vector& ConeDir, float MaxYawInRadians, float MaxPitchInRadians, _Script_CoreUObject::RandomStream& Stream);
    _Script_CoreUObject::Vector RandomUnitVectorInEllipticalConeInRadians(_Script_CoreUObject::Vector ConeDir, float MaxYawInRadians, float MaxPitchInRadians);
    _Script_CoreUObject::Vector RandomUnitVectorInEllipticalConeInDegreesFromStream(_Script_CoreUObject::Vector& ConeDir, float MaxYawInDegrees, float MaxPitchInDegrees, _Script_CoreUObject::RandomStream& Stream);
    _Script_CoreUObject::Vector RandomUnitVectorInEllipticalConeInDegrees(_Script_CoreUObject::Vector ConeDir, float MaxYawInDegrees, float MaxPitchInDegrees);
    _Script_CoreUObject::Vector RandomUnitVectorInConeInRadiansFromStream(_Script_CoreUObject::Vector& ConeDir, float ConeHalfAngleInRadians, _Script_CoreUObject::RandomStream& Stream);
    _Script_CoreUObject::Vector RandomUnitVectorInConeInRadians(_Script_CoreUObject::Vector ConeDir, float ConeHalfAngleInRadians);
    _Script_CoreUObject::Vector RandomUnitVectorInConeInDegreesFromStream(_Script_CoreUObject::Vector& ConeDir, float ConeHalfAngleInDegrees, _Script_CoreUObject::RandomStream& Stream);
    _Script_CoreUObject::Vector RandomUnitVectorInConeInDegrees(_Script_CoreUObject::Vector ConeDir, float ConeHalfAngleInDegrees);
    _Script_CoreUObject::Vector RandomUnitVectorFromStream(_Script_CoreUObject::RandomStream& Stream);
    _Script_CoreUObject::Vector RandomUnitVector();
    _Script_CoreUObject::Rotator RandomRotatorFromStream(bool bRoll, _Script_CoreUObject::RandomStream& Stream);
    _Script_CoreUObject::Rotator RandomRotator(bool bRoll);
    _Script_CoreUObject::Vector RandomPointInBoundingBox(_Script_CoreUObject::Vector& origin, _Script_CoreUObject::Vector& BoxExtent);
    int32_t RandomIntegerInRangeFromStream(int32_t Min, int32_t Max, _Script_CoreUObject::RandomStream& Stream);
    int32_t RandomIntegerInRange(int32_t Min, int32_t Max);
    int32_t RandomIntegerFromStream(int32_t Max, _Script_CoreUObject::RandomStream& Stream);
    int32_t RandomInteger(int32_t Max);
    float RandomFloatInRangeFromStream(float Min, float Max, _Script_CoreUObject::RandomStream& Stream);
    float RandomFloatInRange(float Min, float Max);
    float RandomFloatFromStream(_Script_CoreUObject::RandomStream& Stream);
    float RandomFloat();
    bool RandomBoolWithWeightFromStream(float Weight, _Script_CoreUObject::RandomStream& RandomStream);
    bool RandomBoolWithWeight(float Weight);
    bool RandomBoolFromStream(_Script_CoreUObject::RandomStream& Stream);
    bool RandomBool();
    float RadiansToDegrees(float A);
    _Script_CoreUObject::Vector ProjectVectorOnToVector(_Script_CoreUObject::Vector V, _Script_CoreUObject::Vector Target);
    _Script_CoreUObject::Vector ProjectVectorOnToPlane(_Script_CoreUObject::Vector V, _Script_CoreUObject::Vector PlaneNormal);
    _Script_CoreUObject::Vector ProjectPointOnToPlane(_Script_CoreUObject::Vector Point, _Script_CoreUObject::Vector PlaneBase, _Script_CoreUObject::Vector PlaneNormal);
    bool PointsAreCoplanar(void*& Points, float Tolerance);
    float PerlinNoise1D(float Value);
    int32_t Percent_IntInt(int32_t A, int32_t B);
    float Percent_FloatFloat(float A, float B);
    void* Percent_ByteByte(void* A, void* B);
    int32_t Or_IntInt(int32_t A, int32_t B);
    _Script_CoreUObject::DateTime Now();
    bool NotEqual_VectorVector(_Script_CoreUObject::Vector A, _Script_CoreUObject::Vector B, float ErrorTolerance);
    bool NotEqual_Vector2DVector2D(_Script_CoreUObject::Vector2D A, _Script_CoreUObject::Vector2D B, float ErrorTolerance);
    bool NotEqual_TimespanTimespan(_Script_CoreUObject::Timespan A, _Script_CoreUObject::Timespan B);
    bool NotEqual_RotatorRotator(_Script_CoreUObject::Rotator A, _Script_CoreUObject::Rotator B, float ErrorTolerance);
    bool NotEqual_ObjectObject(_Script_CoreUObject::Object* A, _Script_CoreUObject::Object* B);
    bool NotEqual_NameName(void* A, void* B);
    bool NotEqual_IntInt(int32_t A, int32_t B);
    bool NotEqual_FloatFloat(float A, float B);
    bool NotEqual_DateTimeDateTime(_Script_CoreUObject::DateTime A, _Script_CoreUObject::DateTime B);
    bool NotEqual_ClassClass(void* A, void* B);
    bool NotEqual_ByteByte(void* A, void* B);
    bool NotEqual_BoolBool(bool A, bool B);
    bool Not_PreBool(bool A);
    int32_t Not_Int(int32_t A);
    float NormalizeToRange(float Value, float RangeMin, float RangeMax);
    _Script_CoreUObject::Rotator NormalizedDeltaRotator(_Script_CoreUObject::Rotator A, _Script_CoreUObject::Rotator B);
    float NormalizeAxis(float Angle);
    _Script_CoreUObject::Vector2D Normal2D(_Script_CoreUObject::Vector2D A);
    _Script_CoreUObject::Vector Normal(_Script_CoreUObject::Vector A);
    _Script_CoreUObject::Vector NegateVector(_Script_CoreUObject::Vector A);
    _Script_CoreUObject::Rotator NegateRotator(_Script_CoreUObject::Rotator A);
    bool NearlyEqual_TransformTransform(_Script_CoreUObject::Transform& A, _Script_CoreUObject::Transform& B, float LocationTolerance, float RotationTolerance, float Scale3DTolerance);
    bool NearlyEqual_FloatFloat(float A, float B, float ErrorTolerance);
    float MultiplyMultiply_FloatFloat(float base, float Exp);
    float MultiplyByPi(float Value);
    _Script_CoreUObject::Vector Multiply_VectorVector(_Script_CoreUObject::Vector A, _Script_CoreUObject::Vector B);
    _Script_CoreUObject::Vector Multiply_VectorInt(_Script_CoreUObject::Vector A, int32_t B);
    _Script_CoreUObject::Vector Multiply_VectorFloat(_Script_CoreUObject::Vector A, float B);
    _Script_CoreUObject::Vector2D Multiply_Vector2DVector2D(_Script_CoreUObject::Vector2D A, _Script_CoreUObject::Vector2D B);
    _Script_CoreUObject::Vector2D Multiply_Vector2DFloat(_Script_CoreUObject::Vector2D A, float B);
    _Script_CoreUObject::Timespan Multiply_TimespanFloat(_Script_CoreUObject::Timespan A, float Scalar);
    _Script_CoreUObject::Rotator Multiply_RotatorInt(_Script_CoreUObject::Rotator A, int32_t B);
    _Script_CoreUObject::Rotator Multiply_RotatorFloat(_Script_CoreUObject::Rotator A, float B);
    _Script_CoreUObject::LinearColor Multiply_LinearColorLinearColor(_Script_CoreUObject::LinearColor A, _Script_CoreUObject::LinearColor B);
    _Script_CoreUObject::LinearColor Multiply_LinearColorFloat(_Script_CoreUObject::LinearColor A, float B);
    int32_t Multiply_IntInt(int32_t A, int32_t B);
    float Multiply_IntFloat(int32_t A, float B);
    float Multiply_FloatFloat(float A, float B);
    void* Multiply_ByteByte(void* A, void* B);
    _Script_CoreUObject::Vector MirrorVectorByNormal(_Script_CoreUObject::Vector InVect, _Script_CoreUObject::Vector InNormal);
    void MinOfIntArray(void*& IntArray, int32_t& IndexOfMinValue, int32_t& MinValue);
    void MinOfFloatArray(void*& FloatArray, int32_t& IndexOfMinValue, float& MinValue);
    void MinOfByteArray(void*& ByteArray, int32_t& IndexOfMinValue, void*& MinValue);
    void MinimumAreaRectangle(_Script_CoreUObject::Object* WorldContextObject, void*& InVerts, _Script_CoreUObject::Vector& SampleSurfaceNormal, _Script_CoreUObject::Vector& OutRectCenter, _Script_CoreUObject::Rotator& OutRectRotation, float& OutSideLengthX, float& OutSideLengthY, bool bDebugDraw);
    int32_t Min(int32_t A, int32_t B);
    void MaxOfIntArray(void*& IntArray, int32_t& IndexOfMaxValue, int32_t& MaxValue);
    void MaxOfFloatArray(void*& FloatArray, int32_t& IndexOfMaxValue, float& MaxValue);
    void MaxOfByteArray(void*& ByteArray, int32_t& IndexOfMaxValue, void*& MaxValue);
    int32_t Max(int32_t A, int32_t B);
    _Script_CoreUObject::Vector Matrix_GetOrigin(_Script_CoreUObject::Matrix& InMatrix);
    float MapRangeUnclamped(float Value, float InRangeA, float InRangeB, float OutRangeA, float OutRangeB);
    float MapRangeClamped(float Value, float InRangeA, float InRangeB, float OutRangeA, float OutRangeB);
    _Script_CoreUObject::Vector2D MakeVector2D(float X, float Y);
    _Script_CoreUObject::Vector MakeVector(float X, float Y, float Z);
    _Script_CoreUObject::Transform MakeTransform(_Script_CoreUObject::Vector Location, _Script_CoreUObject::Rotator Rotation, _Script_CoreUObject::Vector Scale);
    _Script_CoreUObject::Timespan MakeTimespan2(int32_t Days, int32_t Hours, int32_t Minutes, int32_t Seconds, int32_t FractionNano);
    _Script_CoreUObject::Timespan MakeTimespan(int32_t Days, int32_t Hours, int32_t Minutes, int32_t Seconds, int32_t Milliseconds);
    _Script_CoreUObject::Rotator MakeRotFromZY(_Script_CoreUObject::Vector& Z, _Script_CoreUObject::Vector& Y);
    _Script_CoreUObject::Rotator MakeRotFromZX(_Script_CoreUObject::Vector& Z, _Script_CoreUObject::Vector& X);
    _Script_CoreUObject::Rotator MakeRotFromZ(_Script_CoreUObject::Vector& Z);
    _Script_CoreUObject::Rotator MakeRotFromYZ(_Script_CoreUObject::Vector& Y, _Script_CoreUObject::Vector& Z);
    _Script_CoreUObject::Rotator MakeRotFromYX(_Script_CoreUObject::Vector& Y, _Script_CoreUObject::Vector& X);
    _Script_CoreUObject::Rotator MakeRotFromY(_Script_CoreUObject::Vector& Y);
    _Script_CoreUObject::Rotator MakeRotFromXZ(_Script_CoreUObject::Vector& X, _Script_CoreUObject::Vector& Z);
    _Script_CoreUObject::Rotator MakeRotFromXY(_Script_CoreUObject::Vector& X, _Script_CoreUObject::Vector& Y);
    _Script_CoreUObject::Rotator MakeRotFromX(_Script_CoreUObject::Vector& X);
    _Script_CoreUObject::Rotator MakeRotator(float Roll, float Pitch, float Yaw);
    _Script_CoreUObject::Rotator MakeRotationFromAxes(_Script_CoreUObject::Vector Forward, _Script_CoreUObject::Vector Right, _Script_CoreUObject::Vector Up);
    _Script_CoreUObject::RandomStream MakeRandomStream(int32_t InitialSeed);
    _Script_CoreUObject::QualifiedFrameTime MakeQualifiedFrameTime(_Script_CoreUObject::FrameNumber Frame, _Script_CoreUObject::FrameRate FrameRate, float SubFrame);
    float MakePulsatingValue(float InCurrentTime, float InPulsesPerSecond, float InPhase);
    _Script_CoreUObject::Plane MakePlaneFromPointAndNormal(_Script_CoreUObject::Vector Point, _Script_CoreUObject::Vector Normal);
    _Script_CoreUObject::FrameRate MakeFrameRate(int32_t Numerator, int32_t Denominator);
    _Script_CoreUObject::DateTime MakeDateTime(int32_t Year, int32_t Month, int32_t Day, int32_t Hour, int32_t Minute, int32_t Second, int32_t Millisecond);
    _Script_CoreUObject::LinearColor MakeColor(float R, float G, float B, float A);
    _Script_CoreUObject::Box2D MakeBox2D(_Script_CoreUObject::Vector2D Min, _Script_CoreUObject::Vector2D Max);
    _Script_CoreUObject::Box MakeBox(_Script_CoreUObject::Vector Min, _Script_CoreUObject::Vector Max);
    float Loge(float A);
    float Log(float A, float base);
    bool LinePlaneIntersection_OriginNormal(_Script_CoreUObject::Vector& LineStart, _Script_CoreUObject::Vector& LineEnd, _Script_CoreUObject::Vector PlaneOrigin, _Script_CoreUObject::Vector PlaneNormal, float& T, _Script_CoreUObject::Vector& Intersection);
    bool LinePlaneIntersection(_Script_CoreUObject::Vector& LineStart, _Script_CoreUObject::Vector& LineEnd, _Script_CoreUObject::Plane& APlane, float& T, _Script_CoreUObject::Vector& Intersection);
    _Script_CoreUObject::LinearColor LinearColorLerpUsingHSV(_Script_CoreUObject::LinearColor A, _Script_CoreUObject::LinearColor B, float Alpha);
    _Script_CoreUObject::LinearColor LinearColorLerp(_Script_CoreUObject::LinearColor A, _Script_CoreUObject::LinearColor B, float Alpha);
    _Script_CoreUObject::Vector LessLess_VectorRotator(_Script_CoreUObject::Vector A, _Script_CoreUObject::Rotator B);
    bool LessEqual_TimespanTimespan(_Script_CoreUObject::Timespan A, _Script_CoreUObject::Timespan B);
    bool LessEqual_IntInt(int32_t A, int32_t B);
    bool LessEqual_FloatFloat(float A, float B);
    bool LessEqual_DateTimeDateTime(_Script_CoreUObject::DateTime A, _Script_CoreUObject::DateTime B);
    bool LessEqual_ByteByte(void* A, void* B);
    bool Less_TimespanTimespan(_Script_CoreUObject::Timespan A, _Script_CoreUObject::Timespan B);
    bool Less_IntInt(int32_t A, int32_t B);
    bool Less_FloatFloat(float A, float B);
    bool Less_DateTimeDateTime(_Script_CoreUObject::DateTime A, _Script_CoreUObject::DateTime B);
    bool Less_ByteByte(void* A, void* B);
    float Lerp(float A, float B, float Alpha);
    bool IsPointInBoxWithTransform(_Script_CoreUObject::Vector Point, _Script_CoreUObject::Transform& BoxWorldTransform, _Script_CoreUObject::Vector BoxExtent);
    bool IsPointInBox(_Script_CoreUObject::Vector Point, _Script_CoreUObject::Vector BoxOrigin, _Script_CoreUObject::Vector BoxExtent);
    bool IsMorning(_Script_CoreUObject::DateTime A);
    bool IsLeapYear(int32_t Year);
    bool IsAfternoon(_Script_CoreUObject::DateTime A);
    _Script_CoreUObject::Transform InvertTransform(_Script_CoreUObject::Transform& T);
    _Script_CoreUObject::Rotator InverseTransformRotation(_Script_CoreUObject::Transform& T, _Script_CoreUObject::Rotator Rotation);
    _Script_CoreUObject::Vector InverseTransformLocation(_Script_CoreUObject::Transform& T, _Script_CoreUObject::Vector Location);
    _Script_CoreUObject::Vector InverseTransformDirection(_Script_CoreUObject::Transform& T, _Script_CoreUObject::Vector Direction);
    bool InRange_IntInt(int32_t Value, int32_t Min, int32_t Max, bool InclusiveMin, bool InclusiveMax);
    bool InRange_FloatFloat(float Value, float Min, float Max, bool InclusiveMin, bool InclusiveMax);
    float Hypotenuse(float Width, float Height);
    void HSVToRGB_Vector(_Script_CoreUObject::LinearColor HSV, _Script_CoreUObject::LinearColor& RGB);
    _Script_CoreUObject::LinearColor HSVToRGB(float H, float S, float V, float A);
    float GridSnap_Float(float Location, float GridSize);
    _Script_CoreUObject::Vector GreaterGreater_VectorRotator(_Script_CoreUObject::Vector A, _Script_CoreUObject::Rotator B);
    bool GreaterEqual_TimespanTimespan(_Script_CoreUObject::Timespan A, _Script_CoreUObject::Timespan B);
    bool GreaterEqual_IntInt(int32_t A, int32_t B);
    bool GreaterEqual_FloatFloat(float A, float B);
    bool GreaterEqual_DateTimeDateTime(_Script_CoreUObject::DateTime A, _Script_CoreUObject::DateTime B);
    bool GreaterEqual_ByteByte(void* A, void* B);
    bool Greater_TimespanTimespan(_Script_CoreUObject::Timespan A, _Script_CoreUObject::Timespan B);
    bool Greater_IntInt(int32_t A, int32_t B);
    bool Greater_FloatFloat(float A, float B);
    bool Greater_DateTimeDateTime(_Script_CoreUObject::DateTime A, _Script_CoreUObject::DateTime B);
    bool Greater_ByteByte(void* A, void* B);
    int32_t GetYear(_Script_CoreUObject::DateTime A);
    void GetYawPitchFromVector(_Script_CoreUObject::Vector InVec, float& Yaw, float& Pitch);
    _Script_CoreUObject::Vector GetVectorArrayAverage(void*& Vectors);
    _Script_CoreUObject::Vector GetUpVector(_Script_CoreUObject::Rotator InRot);
    float GetTotalSeconds(_Script_CoreUObject::Timespan A);
    float GetTotalMinutes(_Script_CoreUObject::Timespan A);
    float GetTotalMilliseconds(_Script_CoreUObject::Timespan A);
    float GetTotalHours(_Script_CoreUObject::Timespan A);
    float GetTotalDays(_Script_CoreUObject::Timespan A);
    _Script_CoreUObject::Timespan GetTimeOfDay(_Script_CoreUObject::DateTime A);
    float GetTAU();
    void GetSlopeDegreeAngles(_Script_CoreUObject::Vector& MyRightYAxis, _Script_CoreUObject::Vector& FloorNormal, _Script_CoreUObject::Vector& UpVector, float& OutSlopePitchDegreeAngle, float& OutSlopeRollDegreeAngle);
    int32_t GetSeconds(_Script_CoreUObject::Timespan A);
    int32_t GetSecond(_Script_CoreUObject::DateTime A);
    _Script_CoreUObject::Vector GetRightVector(_Script_CoreUObject::Rotator InRot);
    _Script_CoreUObject::Vector GetReflectionVector(_Script_CoreUObject::Vector Direction, _Script_CoreUObject::Vector SurfaceNormal);
    float GetPointDistanceToSegment(_Script_CoreUObject::Vector Point, _Script_CoreUObject::Vector SegmentStart, _Script_CoreUObject::Vector SegmentEnd);
    float GetPointDistanceToLine(_Script_CoreUObject::Vector Point, _Script_CoreUObject::Vector LineOrigin, _Script_CoreUObject::Vector LineDirection);
    float GetPI();
    int32_t GetMonth(_Script_CoreUObject::DateTime A);
    int32_t GetMinutes(_Script_CoreUObject::Timespan A);
    int32_t GetMinute(_Script_CoreUObject::DateTime A);
    float GetMinElement(_Script_CoreUObject::Vector A);
    int32_t GetMilliseconds(_Script_CoreUObject::Timespan A);
    int32_t GetMillisecond(_Script_CoreUObject::DateTime A);
    float GetMaxElement(_Script_CoreUObject::Vector A);
    int32_t GetHours(_Script_CoreUObject::Timespan A);
    int32_t GetHour12(_Script_CoreUObject::DateTime A);
    int32_t GetHour(_Script_CoreUObject::DateTime A);
    _Script_CoreUObject::Vector GetForwardVector(_Script_CoreUObject::Rotator InRot);
    _Script_CoreUObject::Timespan GetDuration(_Script_CoreUObject::Timespan A);
    _Script_CoreUObject::Vector GetDirectionUnitVector(_Script_CoreUObject::Vector from, _Script_CoreUObject::Vector to);
    int32_t GetDays(_Script_CoreUObject::Timespan A);
    int32_t GetDayOfYear(_Script_CoreUObject::DateTime A);
    int32_t GetDay(_Script_CoreUObject::DateTime A);
    _Script_CoreUObject::DateTime GetDate(_Script_CoreUObject::DateTime A);
    void GetAzimuthAndElevation(_Script_CoreUObject::Vector InDirection, _Script_CoreUObject::Transform& ReferenceFrame, float& Azimuth, float& Elevation);
    void GetAxes(_Script_CoreUObject::Rotator A, _Script_CoreUObject::Vector& X, _Script_CoreUObject::Vector& Y, _Script_CoreUObject::Vector& Z);
    _Script_CoreUObject::IntVector FTruncVector(_Script_CoreUObject::Vector& InVector);
    int32_t FTrunc(float A);
    _Script_CoreUObject::Timespan FromSeconds(float Seconds);
    _Script_CoreUObject::Timespan FromMinutes(float Minutes);
    _Script_CoreUObject::Timespan FromMilliseconds(float Milliseconds);
    _Script_CoreUObject::Timespan FromHours(float Hours);
    _Script_CoreUObject::Timespan FromDays(float Days);
    float Fraction(float A);
    int32_t FMod(float Dividend, float Divisor, float& Remainder);
    float FMin(float A, float B);
    float FMax(float A, float B);
    float FloatSpringInterp(float current, float Target, _Script_Engine::FloatSpringState& SpringState, float Stiffness, float CriticalDampingFactor, float DeltaTime, float Mass);
    float FixedTurn(float InCurrent, float InDesired, float InDeltaRate);
    float FInterpTo_Constant(float current, float Target, float DeltaTime, float InterpSpeed);
    float FInterpTo(float current, float Target, float DeltaTime, float InterpSpeed);
    float FInterpEaseInOut(float A, float B, float Alpha, float Exponent);
    void FindNearestPointsOnLineSegments(_Script_CoreUObject::Vector Segment1Start, _Script_CoreUObject::Vector Segment1End, _Script_CoreUObject::Vector Segment2Start, _Script_CoreUObject::Vector Segment2End, _Script_CoreUObject::Vector& Segment1Point, _Script_CoreUObject::Vector& Segment2Point);
    _Script_CoreUObject::Rotator FindLookAtRotation(_Script_CoreUObject::Vector& Start, _Script_CoreUObject::Vector& Target);
    _Script_CoreUObject::Vector FindClosestPointOnSegment(_Script_CoreUObject::Vector Point, _Script_CoreUObject::Vector SegmentStart, _Script_CoreUObject::Vector SegmentEnd);
    _Script_CoreUObject::Vector FindClosestPointOnLine(_Script_CoreUObject::Vector Point, _Script_CoreUObject::Vector LineOrigin, _Script_CoreUObject::Vector LineDirection);
    int32_t FFloor(float A);
    float FClamp(float Value, float Min, float Max);
    int32_t FCeil(float A);
    float Exp(float A);
    bool EqualEqual_VectorVector(_Script_CoreUObject::Vector A, _Script_CoreUObject::Vector B, float ErrorTolerance);
    bool EqualEqual_Vector2DVector2D(_Script_CoreUObject::Vector2D A, _Script_CoreUObject::Vector2D B, float ErrorTolerance);
    bool EqualEqual_TransformTransform(_Script_CoreUObject::Transform& A, _Script_CoreUObject::Transform& B);
    bool EqualEqual_TimespanTimespan(_Script_CoreUObject::Timespan A, _Script_CoreUObject::Timespan B);
    bool EqualEqual_RotatorRotator(_Script_CoreUObject::Rotator A, _Script_CoreUObject::Rotator B, float ErrorTolerance);
    bool EqualEqual_ObjectObject(_Script_CoreUObject::Object* A, _Script_CoreUObject::Object* B);
    bool EqualEqual_NameName(void* A, void* B);
    bool EqualEqual_IntInt(int32_t A, int32_t B);
    bool EqualEqual_FloatFloat(float A, float B);
    bool EqualEqual_DateTimeDateTime(_Script_CoreUObject::DateTime A, _Script_CoreUObject::DateTime B);
    bool EqualEqual_ClassClass(void* A, void* B);
    bool EqualEqual_ByteByte(void* A, void* B);
    bool EqualEqual_BoolBool(bool A, bool B);
    float Ease(float A, float B, float Alpha, void* EasingFunc, float BlendExp, int32_t Steps);
    float DotProduct2D(_Script_CoreUObject::Vector2D A, _Script_CoreUObject::Vector2D B);
    float Dot_VectorVector(_Script_CoreUObject::Vector A, _Script_CoreUObject::Vector B);
    _Script_CoreUObject::Vector Divide_VectorVector(_Script_CoreUObject::Vector A, _Script_CoreUObject::Vector B);
    _Script_CoreUObject::Vector Divide_VectorInt(_Script_CoreUObject::Vector A, int32_t B);
    _Script_CoreUObject::Vector Divide_VectorFloat(_Script_CoreUObject::Vector A, float B);
    _Script_CoreUObject::Vector2D Divide_Vector2DVector2D(_Script_CoreUObject::Vector2D A, _Script_CoreUObject::Vector2D B);
    _Script_CoreUObject::Vector2D Divide_Vector2DFloat(_Script_CoreUObject::Vector2D A, float B);
    _Script_CoreUObject::Timespan Divide_TimespanFloat(_Script_CoreUObject::Timespan A, float Scalar);
    int32_t Divide_IntInt(int32_t A, int32_t B);
    float Divide_FloatFloat(float A, float B);
    void* Divide_ByteByte(void* A, void* B);
    float DegTan(float A);
    float DegSin(float A);
    float DegreesToRadians(float A);
    float DegCos(float A);
    float DegAtan2(float A, float B);
    float DegAtan(float A);
    float DegAsin(float A);
    float DegAcos(float A);
    int32_t DaysInYear(int32_t Year);
    int32_t DaysInMonth(int32_t Year, int32_t Month);
    _Script_CoreUObject::DateTime DateTimeMinValue();
    _Script_CoreUObject::DateTime DateTimeMaxValue();
    bool DateTimeFromString(void* DateTimeString, _Script_CoreUObject::DateTime& Result);
    bool DateTimeFromIsoString(void* IsoString, _Script_CoreUObject::DateTime& Result);
    float CrossProduct2D(_Script_CoreUObject::Vector2D A, _Script_CoreUObject::Vector2D B);
    _Script_CoreUObject::Vector Cross_VectorVector(_Script_CoreUObject::Vector A, _Script_CoreUObject::Vector B);
    _Script_CoreUObject::Vector CreateVectorFromYawPitch(float Yaw, float Pitch, float Length);
    float Cos(float A);
    _Script_CoreUObject::Transform ConvertTransformToRelative(_Script_CoreUObject::Transform& Transform, _Script_CoreUObject::Transform& ParentTransform);
    _Script_CoreUObject::Vector2D Conv_VectorToVector2D(_Script_CoreUObject::Vector InVector);
    _Script_CoreUObject::Transform Conv_VectorToTransform(_Script_CoreUObject::Vector InLocation);
    _Script_CoreUObject::Rotator Conv_VectorToRotator(_Script_CoreUObject::Vector InVec);
    _Script_CoreUObject::LinearColor Conv_VectorToLinearColor(_Script_CoreUObject::Vector InVec);
    _Script_CoreUObject::Vector Conv_Vector2DToVector(_Script_CoreUObject::Vector2D InVector2D, float Z);
    _Script_CoreUObject::Vector Conv_RotatorToVector(_Script_CoreUObject::Rotator InRot);
    _Script_CoreUObject::Transform Conv_RotatorToTransform(_Script_CoreUObject::Rotator& InRotator);
    _Script_CoreUObject::Transform Conv_MatrixToTransform(_Script_CoreUObject::Matrix& InMatrix);
    _Script_CoreUObject::Rotator Conv_MatrixToRotator(_Script_CoreUObject::Matrix& InMatrix);
    _Script_CoreUObject::Vector Conv_LinearColorToVector(_Script_CoreUObject::LinearColor InLinearColor);
    _Script_CoreUObject::Color Conv_LinearColorToColor(_Script_CoreUObject::LinearColor InLinearColor);
    _Script_CoreUObject::Vector Conv_IntVectorToVector(_Script_CoreUObject::IntVector& InIntVector);
    _Script_CoreUObject::IntVector Conv_IntToIntVector(int32_t inInt);
    float Conv_IntToFloat(int32_t inInt);
    void* Conv_IntToByte(int32_t inInt);
    bool Conv_IntToBool(int32_t inInt);
    _Script_CoreUObject::Vector Conv_FloatToVector(float InFloat);
    _Script_CoreUObject::LinearColor Conv_FloatToLinearColor(float InFloat);
    _Script_CoreUObject::LinearColor Conv_ColorToLinearColor(_Script_CoreUObject::Color InColor);
    int32_t Conv_ByteToInt(void* InByte);
    float Conv_ByteToFloat(void* InByte);
    int32_t Conv_BoolToInt(bool InBool);
    float Conv_BoolToFloat(bool InBool);
    void* Conv_BoolToByte(bool InBool);
    _Script_CoreUObject::Transform ComposeTransforms(_Script_CoreUObject::Transform& A, _Script_CoreUObject::Transform& B);
    _Script_CoreUObject::Rotator ComposeRotators(_Script_CoreUObject::Rotator A, _Script_CoreUObject::Rotator B);
    bool ClassIsChildOf(void* TestClass, void* ParentClass);
    _Script_CoreUObject::Vector ClampVectorSize(_Script_CoreUObject::Vector A, float Min, float Max);
    float ClampAxis(float Angle);
    float ClampAngle(float AngleDegrees, float MinAngleDegrees, float MaxAngleDegrees);
    int32_t Clamp(int32_t Value, int32_t Min, int32_t Max);
    _Script_CoreUObject::LinearColor CInterpTo(_Script_CoreUObject::LinearColor current, _Script_CoreUObject::LinearColor Target, float DeltaTime, float InterpSpeed);
    void BreakVector2D(_Script_CoreUObject::Vector2D InVec, float& X, float& Y);
    void BreakVector(_Script_CoreUObject::Vector InVec, float& X, float& Y, float& Z);
    void BreakTransform(_Script_CoreUObject::Transform& InTransform, _Script_CoreUObject::Vector& Location, _Script_CoreUObject::Rotator& Rotation, _Script_CoreUObject::Vector& Scale);
    void BreakTimespan2(_Script_CoreUObject::Timespan InTimespan, int32_t& Days, int32_t& Hours, int32_t& Minutes, int32_t& Seconds, int32_t& FractionNano);
    void BreakTimespan(_Script_CoreUObject::Timespan InTimespan, int32_t& Days, int32_t& Hours, int32_t& Minutes, int32_t& Seconds, int32_t& Milliseconds);
    void BreakRotIntoAxes(_Script_CoreUObject::Rotator& InRot, _Script_CoreUObject::Vector& X, _Script_CoreUObject::Vector& Y, _Script_CoreUObject::Vector& Z);
    void BreakRotator(_Script_CoreUObject::Rotator InRot, float& Roll, float& Pitch, float& Yaw);
    void BreakRandomStream(_Script_CoreUObject::RandomStream& InRandomStream, int32_t& InitialSeed);
    void BreakQualifiedFrameTime(_Script_CoreUObject::QualifiedFrameTime& InFrameTime, _Script_CoreUObject::FrameNumber& Frame, _Script_CoreUObject::FrameRate& FrameRate, float& SubFrame);
    void BreakFrameRate(_Script_CoreUObject::FrameRate& InFrameRate, int32_t& Numerator, int32_t& Denominator);
    void BreakDateTime(_Script_CoreUObject::DateTime InDateTime, int32_t& Year, int32_t& Month, int32_t& Day, int32_t& Hour, int32_t& Minute, int32_t& Second, int32_t& Millisecond);
    void BreakColor(_Script_CoreUObject::LinearColor InColor, float& R, float& G, float& B, float& A);
    bool BooleanXOR(bool A, bool B);
    bool BooleanOR(bool A, bool B);
    bool BooleanNOR(bool A, bool B);
    bool BooleanNAND(bool A, bool B);
    bool BooleanAND(bool A, bool B);
    void* BMin(void* A, void* B);
    void* BMax(void* A, void* B);
    float Atan2(float A, float B);
    float Atan(float A);
    float Asin(float A);
    int32_t And_IntInt(int32_t A, int32_t B);
    _Script_CoreUObject::Vector Add_VectorVector(_Script_CoreUObject::Vector A, _Script_CoreUObject::Vector B);
    _Script_CoreUObject::Vector Add_VectorInt(_Script_CoreUObject::Vector A, int32_t B);
    _Script_CoreUObject::Vector Add_VectorFloat(_Script_CoreUObject::Vector A, float B);
    _Script_CoreUObject::Vector2D Add_Vector2DVector2D(_Script_CoreUObject::Vector2D A, _Script_CoreUObject::Vector2D B);
    _Script_CoreUObject::Vector2D Add_Vector2DFloat(_Script_CoreUObject::Vector2D A, float B);
    _Script_CoreUObject::Timespan Add_TimespanTimespan(_Script_CoreUObject::Timespan A, _Script_CoreUObject::Timespan B);
    int32_t Add_IntInt(int32_t A, int32_t B);
    float Add_FloatFloat(float A, float B);
    _Script_CoreUObject::DateTime Add_DateTimeTimespan(_Script_CoreUObject::DateTime A, _Script_CoreUObject::Timespan B);
    void* Add_ByteByte(void* A, void* B);
    float Acos(float A);
    int32_t Abs_Int(int32_t A);
    float Abs(float A);
}; // Size: 0x28
#pragma pack(pop)
}
