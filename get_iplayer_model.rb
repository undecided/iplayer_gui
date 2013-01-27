class IPlayer
  class << self
    def get(str)
      `get_iplayer -g #{str.inspect}`
    end

    def search(str)
      `get_iplayer #{str.inspect}`
    end

  end	
end