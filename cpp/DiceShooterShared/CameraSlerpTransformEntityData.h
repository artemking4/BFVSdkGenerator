// Object: CameraSlerpTransformEntityData
// ClassId: 2455
// RuntimeId: 41475
// TypeInfo: 0x0000000144DEE720
#include "../DiceShooterShared/CameraTransformerEntityData.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"
#include "../Core/LinearTransform.h"

#pragma pack(push, 16)
namespace DiceShooterShared {
    class CameraSlerpTransformEntityData : public DiceShooterShared::CameraTransformerEntityData {
        Float32 TranslationDurationX; // 0x28
        Float32 TranslationDurationY; // 0x2C
        Float32 TranslationDurationZ; // 0x30
        char pad_0x34[0xC];
        Core::LinearTransform InTransform; // 0x40
        Float32 RotationDuration; // 0x80
        Boolean OnlyWriteIfModified; // 0x84
        char pad_0x85[0xB];
    }; // 0x90
    static_assert(sizeof(CameraSlerpTransformEntityData) == 0x90);
}
#pragma pack(pop)