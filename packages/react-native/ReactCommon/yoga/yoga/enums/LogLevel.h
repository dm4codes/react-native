/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

// @generated by enums.py
// clang-format off
#pragma once

#include <cstdint>
#include <yoga/YGEnums.h>
#include <yoga/enums/YogaEnums.h>

namespace facebook::yoga {

enum class LogLevel : uint8_t {
  Error = YGLogLevelError,
  Warn = YGLogLevelWarn,
  Info = YGLogLevelInfo,
  Debug = YGLogLevelDebug,
  Verbose = YGLogLevelVerbose,
  Fatal = YGLogLevelFatal,
};

template <>
constexpr inline int32_t ordinalCount<LogLevel>() {
  return 6;
} 

template <>
constexpr inline int32_t bitCount<LogLevel>() {
  return 3;
} 

constexpr inline LogLevel scopedEnum(YGLogLevel unscoped) {
  return static_cast<LogLevel>(unscoped);
}

constexpr inline YGLogLevel unscopedEnum(LogLevel scoped) {
  return static_cast<YGLogLevel>(scoped);
}

inline const char* toString(LogLevel e) {
  return YGLogLevelToString(unscopedEnum(e));
}

} // namespace facebook::yoga