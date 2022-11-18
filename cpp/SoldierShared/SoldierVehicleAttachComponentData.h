// Object: SoldierVehicleAttachComponentData
// ClassId: 1850
// RuntimeId: 15114
// TypeInfo: 0x0000000144F44B30
#include "../Entity/GameComponentData.h"
#include "../SoldierShared/ANTReadBinding.h"
#include "../SoldierShared/CommonANTBinding.h"
#include "../MotionMachineShared/BoolChannelData.h"
#include "../MotionMachineShared/IntChannelData.h"
#include "../MotionMachineShared/FloatChannelData.h"
#include "../MotionMachineShared/TransformChannelData.h"
#include "../MotionMachineShared/Vec3ChannelData.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace SoldierShared {
    class SoldierVehicleAttachComponentData : public Entity::GameComponentData {
        SoldierShared::ANTReadBinding ReadAnt; // 0x80
        SoldierShared::CommonANTBinding CommonAnt; // 0xE4
        char pad_0x1FC[0x4];
        MotionMachineShared::BoolChannelData ActivateVehicleTransition; // 0x200
        MotionMachineShared::BoolChannelData ActivateDirectVehicleTransition; // 0x208
        MotionMachineShared::BoolChannelData ActivateExitTransition; // 0x210
        MotionMachineShared::BoolChannelData ActivateDirectTransitionInToVehicle; // 0x218
        MotionMachineShared::BoolChannelData ActivateDirectTransitionOutFromVehicle; // 0x220
        MotionMachineShared::IntChannelData CurrentEntryIndex; // 0x228
        MotionMachineShared::IntChannelData LastEntryIndex; // 0x230
        MotionMachineShared::IntChannelData VehicleType; // 0x238
        MotionMachineShared::IntChannelData CurrentSeatType; // 0x240
        MotionMachineShared::IntChannelData LastSeatType; // 0x248
        MotionMachineShared::IntChannelData SpecialMoves; // 0x250
        MotionMachineShared::FloatChannelData VehicleEnterDirection; // 0x258
        MotionMachineShared::FloatChannelData VehicleEnterDirectionRelativeVehicle; // 0x260
        MotionMachineShared::TransformChannelData AlignTransformRoot; // 0x268
        MotionMachineShared::TransformChannelData AlignTransformCurrentEntry; // 0x270
        MotionMachineShared::TransformChannelData AlignTransformLastEntry; // 0x278
        MotionMachineShared::BoolChannelData IsInVehicle; // 0x280
        MotionMachineShared::BoolChannelData InVehicleTransition; // 0x288
        MotionMachineShared::BoolChannelData InVehicleExitTransition; // 0x290
        MotionMachineShared::BoolChannelData EnableDrivingInputDuringTransition; // 0x298
        MotionMachineShared::BoolChannelData EnableFireInputDuringTransition; // 0x2A0
        MotionMachineShared::IntChannelData AlignIndex; // 0x2A8
        MotionMachineShared::FloatChannelData RotationWeight; // 0x2B0
        MotionMachineShared::Vec3ChannelData TranslationWeight; // 0x2B8
        MotionMachineShared::TransformChannelData PhysicsTransform; // 0x2C0
        MotionMachineShared::TransformChannelData ConnectTransform; // 0x2C8
        Boolean ShouldKillPlayersIfVehicleDestroyed; // 0x2D0
        char pad_0x2D1[0xF];
    }; // 0x2E0
    static_assert(sizeof(SoldierVehicleAttachComponentData) == 0x2E0);
}
#pragma pack(pop)