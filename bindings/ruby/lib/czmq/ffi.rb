################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Please refer to the README for information about making permanent changes.  #
################################################################################

require 'ffi'

require_relative 'ffi/version'


module CZMQ
  module FFI
    extend ::FFI::Library
    
    def self.available?
      @available
    end
    
    begin
      lib_name = 'libczmq'
      lib_paths = ['/usr/local/lib', '/opt/local/lib', '/usr/lib64']
        .map { |path| "#{path}/#{lib_name}.#{::FFI::Platform::LIBSUFFIX}" }
      ffi_lib lib_paths + [lib_name]
      @available = true
    rescue LoadError
      warn ""
      warn "WARNING: ::CZMQ::FFI is not available without libczmq."
      warn ""
      @available = false
    end
    
    if available?
      opts = {
        blocking: true  # only necessary on MRI to deal with the GIL.
      }
      
      attach_function :zhash_new, [], :pointer, **opts
      attach_function :zhash_destroy, [:pointer], :void, **opts
      attach_function :zhash_insert, [:pointer, :string, :pointer], :int, **opts
      attach_function :zhash_update, [:pointer, :string, :pointer], :void, **opts
      attach_function :zhash_delete, [:pointer, :string], :void, **opts
      attach_function :zhash_lookup, [:pointer, :string], :pointer, **opts
      attach_function :zhash_rename, [:pointer, :string, :string], :int, **opts
      attach_function :zhash_freefn, [:pointer, :string, :pointer], :pointer, **opts
      attach_function :zhash_size, [:pointer], :size_t, **opts
      attach_function :zhash_dup, [:pointer], :pointer, **opts
      attach_function :zhash_keys, [:pointer], :pointer, **opts
      attach_function :zhash_first, [:pointer], :pointer, **opts
      attach_function :zhash_next, [:pointer], :pointer, **opts
      attach_function :zhash_cursor, [:pointer], :string, **opts
      attach_function :zhash_comment, [:pointer, :string, :varargs], :void, **opts
      attach_function :zhash_pack, [:pointer], :pointer, **opts
      attach_function :zhash_unpack, [:pointer], :pointer, **opts
      attach_function :zhash_save, [:pointer, :string], :int, **opts
      attach_function :zhash_load, [:pointer, :string], :int, **opts
      attach_function :zhash_refresh, [:pointer], :int, **opts
      attach_function :zhash_autofree, [:pointer], :void, **opts
      attach_function :zhash_foreach, [:pointer, :pointer, :pointer], :int, **opts
      attach_function :zhash_test, [:int], :void, **opts
      
      require_relative 'ffi/zhash'
    end
  end
end

################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Please refer to the README for information about making permanent changes.  #
################################################################################
