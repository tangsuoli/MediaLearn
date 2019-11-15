/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_jadyn_mediakit_player_ALVideoPlayer */

#ifndef _Included_com_jadyn_mediakit_player_ALVideoPlayer
#define _Included_com_jadyn_mediakit_player_ALVideoPlayer
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_jadyn_mediakit_player_ALVideoPlayer
 * Method:    prepare
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_jadyn_mediakit_player_ALVideoPlayer_prepare
        (JNIEnv *, jobject, jstring, jobject, jobject);

/*
 * Class:     com_jadyn_mediakit_player_ALVideoPlayer
 * Method:    play
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_jadyn_mediakit_player_ALVideoPlayer_play
        (JNIEnv *, jobject);

/*
 * Class:     com_jadyn_mediakit_player_ALVideoPlayer
 * Method:    stop
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_jadyn_mediakit_player_ALVideoPlayer_stop
        (JNIEnv *, jobject);

/*
 * Class:     com_jadyn_mediakit_player_ALVideoPlayer
 * Method:    stopPlay
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_jadyn_mediakit_player_ALVideoPlayer_stopPlay
        (JNIEnv *, jobject);

/*
 * Class:     com_jadyn_mediakit_player_ALVideoPlayer
 * Method:    pause
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_jadyn_mediakit_player_ALVideoPlayer_pause
        (JNIEnv *, jobject);

/*
 * Class:     com_jadyn_mediakit_player_ALVideoPlayer
 * Method:    seekTo
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_com_jadyn_mediakit_player_ALVideoPlayer_seekTo
        (JNIEnv *, jobject, jfloat);

/*
 * Class:     com_jadyn_mediakit_player_ALVideoPlayer
 * Method:    release
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_jadyn_mediakit_player_ALVideoPlayer_release
        (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif